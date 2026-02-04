#include<stdio.h>
void fab(int *a,int *b);
int main()
{
    int i,a=0,b=1,n;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("fabonacci series:%d\t%d",a,b);
    for(i=3;i<=n;i++)
    {
        fab(&a,&b);
    }
}
void fab(int *a,int *b)
{
    int c,i;
    c=*a+*b;
    *a=*b;
    *b=c;
    printf("\t%d",c);
    
}