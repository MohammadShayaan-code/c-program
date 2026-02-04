#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;
};

struct paragraph {
    struct sentence* data;
    int sentence_count;
};

struct document {
    struct paragraph* data;
    int paragraph_count;
};

/* ================= DOCUMENT PARSER ================= */

struct document get_document(char* text) {
    struct document doc;

    /* Count paragraphs */
    doc.paragraph_count = 1;
    for (int i = 0; text[i]; i++)
        if (text[i] == '\n') doc.paragraph_count++;

    doc.data = malloc(doc.paragraph_count * sizeof(struct paragraph));

    char *save_p1, *save_p2, *save_p3;
    char *paragraph = strtok_r(text, "\n", &save_p1);

    int p = 0;
    while (paragraph) {

        /* Count sentences */
        int sc = 0;
        char temp_p[MAX_CHARACTERS];
        strcpy(temp_p, paragraph);
        char *tmp = strtok(temp_p, ".");
        while (tmp) {
            sc++;
            tmp = strtok(NULL, ".");
        }

        doc.data[p].sentence_count = sc;
        doc.data[p].data = malloc(sc * sizeof(struct sentence));

        char *sentence = strtok_r(paragraph, ".", &save_p2);
        int s = 0;

        while (sentence) {

            /* Count words */
            int wc = 0;
            char temp_s[MAX_CHARACTERS];
            strcpy(temp_s, sentence);
            char *tmp2 = strtok(temp_s, " ");
            while (tmp2) {
                wc++;
                tmp2 = strtok(NULL, " ");
            }

            doc.data[p].data[s].word_count = wc;
            doc.data[p].data[s].data = malloc(wc * sizeof(struct word));

            char *word = strtok_r(sentence, " ", &save_p3);
            int w = 0;

            while (word) {
                doc.data[p].data[s].data[w].data = malloc(strlen(word) + 1);
                strcpy(doc.data[p].data[s].data[w].data, word);
                w++;
                word = strtok_r(NULL, " ", &save_p3);
            }

            s++;
            sentence = strtok_r(NULL, ".", &save_p2);
        }

        p++;
        paragraph = strtok_r(NULL, "\n", &save_p1);
    }

    return doc;
}

/* ================= QUERY FUNCTIONS ================= */

struct word kth_word_in_mth_sentence_of_nth_paragraph(
    struct document doc, int k, int m, int n) {
    return doc.data[n - 1].data[m - 1].data[k - 1];
}

struct sentence kth_sentence_in_mth_paragraph(
    struct document doc, int k, int m) {
    return doc.data[m - 1].data[k - 1];
}

struct paragraph kth_paragraph(struct document doc, int k) {
    return doc.data[k - 1];
}

/* ================= PRINT FUNCTIONS ================= */

void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for (int i = 0; i < sen.word_count; i++) {
        printf("%s", sen.data[i].data);
        if (i != sen.word_count - 1)
            printf(" ");
    }
}

void print_paragraph(struct paragraph para) {
    for (int i = 0; i < para.sentence_count; i++) {
        print_sentence(para.data[i]);
        printf(".");
    }
}

/* ================= INPUT ================= */

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);
    getchar();

    char doc[MAX_CHARACTERS] = "";
    char line[MAX_CHARACTERS];

    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", line);
        strcat(doc, line);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* text = malloc(strlen(doc) + 1);
    strcpy(text, doc);
    return text;
}

/* ================= MAIN ================= */

int main() {
    char* text = get_input_text();
    struct document doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            print_word(
                kth_word_in_mth_sentence_of_nth_paragraph(doc, k, m, n));
        } 
        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            print_sentence(
                kth_sentence_in_mth_paragraph(doc, k, m));
        } 
        else {
            int k;
            scanf("%d", &k);
            print_paragraph(kth_paragraph(doc, k));
        }
        printf("\n");
    }

    return 0;
}
