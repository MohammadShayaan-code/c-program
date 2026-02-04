// #include<stdio.h>
// int fab(int n){
//     if(n==0) return 0;
//     else if(n==1) return 1;
//     else return fab(n-1)+fab(n-2);
// }
// int main(){
//     int a;
//     for(int i=0;i<=10;i++){
//         printf("%d ",fab(i));
//     }
// }
// #include<stdio.h>
// void swap(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("%d %d",a,b);
// }
// int main(){
//     int a=2,b=4;
//     swap(a,b);
//     printf("%d %d",a,b);
// }
// #include<stdio.h>
// int display(int a[],int size,int index){
//     if(index==size) return 0;
//     printf("%d ",a[index]);
//     display(a,5,index+1);
    
// }
// int main(){
//     int a[]={1,2,3,4,5};
//     display(a,5,0);
// }
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b,*c;
    a=(int*) malloc(sizeof(int));
   b=(int*) malloc(sizeof(int));
     c=(int*) malloc(sizeof(int));
    scanf("%d %d",a,b);
     *c=*a+*b;
    printf("%d ",*c);
}
