#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    for(int i=1;str[i]!='\0';i++){
        printf("%c \n",str[i]);
        for(int j=0;i<=10;j++){
            if(str[i]==j) printf("yes");
            else {
                printf("No");
                break;
            }
        }
    }
}