#include<stdio.h>
void dis(char ch[],int s){
    for(int i=0;i<s;i++){
        printf("%c ",ch[i]);
    }
}

int main(){
    char a[]={'a','m','r','l','h'};
    dis(a,5);
}