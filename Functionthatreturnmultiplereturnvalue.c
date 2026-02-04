#include<stdio.h>

void calc(int a,int b,int *sum,int *diff)
{
    *sum=a+b;
    *diff=a-b;
    //return *sum,*diff;

}
int main()
{
    int a,b,sum,diff;
    printf("enter numbers to add: ");
    scanf("%d%d",&a,&b);
    printf("enter numbers to subtract: \n");
    scanf("%d%d",&a,&b);
    calc(a,b,&sum,&diff);
    printf("sum=%d\ndiff=%d",sum,diff);
    
}                                    