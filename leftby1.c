#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int temp=a[0];
    for(int i=1;i<6;i++){
        // for(int j=1;j<6;j++){-1
            a[i-1]=a[i];
            //  a[5]=temp;

        // }
    }
    a[5]=temp;
    for(int i=0;i<6;i++){

        printf("%d",a[i]);
    }
}