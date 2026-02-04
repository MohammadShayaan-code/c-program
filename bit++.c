#include<stdio.h>
int main(){
    char str[1000],count=0;
    for(int i=0;i<2;i++){
        scanf("%s",str);
        // for(int i=0;str[i]!='\0';i++){
                
                if(str[1]=='+' ){
                    count++;
                }
                if(str[1]=='-'){
                    count--;
                }
            // }

    }
    printf("%d",count);
}