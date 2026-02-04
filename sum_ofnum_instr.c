#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int flag=0;
    
    int static count;
    
        for(int j=0;str[j]!='\0';j++){
            if(str[j]>='0' && str[j]<='9'){
                flag=1;
                // break;
                count=count+(str[j]-'0');
            }
            
            // if(flag)
        }
    
    printf("%d",count);
}