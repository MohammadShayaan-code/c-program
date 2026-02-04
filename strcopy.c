#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100];
    scanf("%[^\n]",str);
    strcpy(str2,str);
    printf("%s",str2);
}