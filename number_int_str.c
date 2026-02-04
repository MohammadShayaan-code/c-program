#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int flag=0;
    // for(int i=0;i<=10;i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[j]>='0' && str[j]<='9'){
                    flag=1;
                    break;
            }
           
        }
        if(flag){
         printf("yes");
        //  break;
        }
        else {
            printf("no");
            // break;
        }
}