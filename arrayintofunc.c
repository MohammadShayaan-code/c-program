// #include<stdio.h>
// int main()
// {
//     int a[10][10],b[10][10],c[10][10],i,j;
//     printf("enter 4 element of matrix A:\n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//              scanf("%d",&a[i][j]);
//         }
       
//     }
//     printf("enter 4 element of matrix B:\n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//              scanf("%d",&b[i][j]);
//         }
       
        
//     }
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//             c[i][j]= a[i][j]+b[i][j];
//         }
       
//     }
//     printf("add:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++){
//               printf("%d\t",c[i][j]);
//         }
//         printf("\n");
       
//     }
   
  
// }

//============================================================================================


#include<stdio.h>
void mat(int a ,int b);
int main()
{
    int a[10][10],b[10][10],i,j;
    printf("enter element of matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ennter elemnt of matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    mat(a,b);
}
void mat(int a ,int b)
{
    int c[10][10],i,j;
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}