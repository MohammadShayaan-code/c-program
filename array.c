// #include<stdio.h>
// void array(int *a[5])
// int main()
// {
//     int a[5];
//     printf("enter elements of array: ");
//      scanf("%d",&a[5]);
//     array();
// }
// void array(int *a[5])
// {
//     //scanf("%d",&a[5]);
//     printf("element of array[%d]",*a[5]);
// }

// #include<stdio.h>
// int main()
// {
//     int a[4]={1,2,3,4};
//     for(int i=0;i<4;i++){
//         printf("%d",a[i]);
//     }
    
// }

//======================================================
#include<stdio.h>
void display(int a[],int b);
int main()
{
    int a[5];
    printf("enter 5 elements of array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,5);

}
void display(int a[],int b)
{
    printf("element of array:\n");
    for(int i=4;i>=0&&i<b;i--){
        printf("%d",a[i]);
        printf("\n");
    }
    
}