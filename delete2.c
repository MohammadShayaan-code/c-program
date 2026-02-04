#include<stdio.h>
int dis(){
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}

int main(){
    int x;
    x=dis()*2;
    printf("%d",x);
}