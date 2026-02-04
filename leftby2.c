#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6},temp[100],j=0;
    // int temp=a[0],t=a[1];
    int d=20;
    d=d%6;
    // printf("%d",d);
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<6;i++){
        a[i-d]=a[i];
    }
    // a[5]=temp;
    // a[4]=t;
    for(int i=6-d;i<6;i++){
        a[i]=temp[i-(d+1)];
        // for(int j=0;j<=d;j++){
            a[i]=temp[j];
            j++;
        //     break;
        // }

    }
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }

}