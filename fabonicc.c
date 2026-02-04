// #include<stdio.h>
// int main()
// {
//     int i,a,f;
//     for(i=0;i<=10;i++)
//     {
//         printf("\n");
//         f=i+(i-=1);
        
//         printf("%d",f);
//     }
    

// }
// {
//     int i,a=0,b=1,c;
//     printf("enter fabonicc series:\t%d\t%d",a,b);
//     for(i=3;i<=10;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("\t%d",c);
        
//     }
//     return 0;
// }











//-----------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    int a=0,b=1,i,c;
    printf("fabonacci series:%d\t%d",a,b);
    for(i=2;i<=10;i++)
    { 
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
    }
    return 0;
}