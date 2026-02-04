#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    scanf("%[^\n]",str);
    getchar();
    scanf("%c",&ch);
    // fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++){
        // printf("%c",str[i]);
        if(str[i]==ch){
            printf("%d",i);
            break;
        }
    }
}


