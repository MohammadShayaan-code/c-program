#include <stdio.h>

int main() {
    int marks[50], count[10] = {0};
    int i, group;

    // Reading marks of 50 students
    printf("Enter marks of 50 students (0-100):\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] == 0) {
            group = 0; // special case for 0
        } else {
            group = (marks[i] - 1) / 10; 
        }

        if (group >= 0 && group < 10) {
            count[group]++;
        }
    }

    // Printing result
    printf("\nGroup-wise count of students:\n");
    for (i = 0; i < 10; i++) {
        int lower = i * 10 + 1;
        int upper = (i + 1) * 10;
        if (i == 0)  // special case for first group (0-10)
            printf("0 - 10 : %d\n", count[i]);
        else
            printf("%d - %d : %d\n", lower, upper, count[i]);
    }

    return 0;
}

