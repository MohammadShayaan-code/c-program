// #include<stdio.h>
// int main()
// {
//     int i,n,fact=1;
//     printf("enter a number to find its factorial:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;

//     }
//     printf("%d",fact);
// }
// //-------------------------------------------------------------
// #include<stdio.h>
// void fab();
// int main()
// {
//     int i,a=0,b=1,n,c;
//     printf("fabonacci series: %d\t%d",a,b);
//     fab();
    
    
   
// }
// void fab()
// {
//     int c,a=0,b=1,i,n;
//     printf("enter number of terms:\n");
//     scanf("%d",&n);
//      for(i=1;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("\t%d",c);
//     }
   
    

// }
//-------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int i,a=0,b=1,n,c;
//     printf("enter number of terms:");
//     scanf("%d",&n);
//     printf("fabonacci series:%d\t%d",a,b);
//     for(i=3;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("\t%d",c);

//     }
// }
#include<stdio.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}