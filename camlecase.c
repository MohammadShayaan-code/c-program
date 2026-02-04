#include<stdio.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int a='A',b='Z';
    // printf("%d",a);
    int static count;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=a && str[i]<=b){
            count++;
        }

    }
    printf("%d",count);
}