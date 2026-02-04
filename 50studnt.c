// // #include<stdio.h>
// // int main()
// // {
// //     int a[10],i,sum;
// //     for(i=0;i<=10;i++)
// //     {
// //         sum+=i;
// //     }
// //     printf("%d",sum);

// // }

// // #include<stdio.h>
// // int main()
// // {
// //     int i,a[10],sum;
// //     printf("enter element of array:");
// //     for(i=0;i<10;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     for(i=0;i<=10;i++)
// //     {
// //         sum+=i;
// //     }
// //     printf("%d",sum);
// // }


// #include<stdio.h>
// int main()
// {
//     int i,m;
//     printf("enter ur marks:");
//     scanf("%d",&m);
//     if(m<=100 && m>90)
//     {
//         printf("ur grade is A+");
//     }
//     else if (m<=90 && m>80)
//     {
//         printf("ur grade is A");
//     }
//     else if(m<=80 && m>70)
//     {
//         printf("ur garade is B");
//     }
//     else{
//         printf("failed");
//     }
//     return 0;
   

// }



#include<stdio.h>
int main()
{
    int i,m[10],count=0;
    printf("enter marks of student:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&m[i]);
        
    }
    for(i=0;i<5;i++)
    {
     if(m[i]>0 && m[i]<10)
        {
            count=count+1;
            
            
        }
    }
    printf(":%d",count);
   
}