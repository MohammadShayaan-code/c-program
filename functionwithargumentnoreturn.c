#include<stdio.h>
void add(int a,int b);
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    add(a,b);
     return 0;
}
void add(int a,int b)
{
    int add =a+b;
    printf("%d+%d=%d",a,b,add);
   
}