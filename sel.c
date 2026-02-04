#include<stdio.h>
int main(){
    int a[]={1,2,3,6,4,5,6};
    int n=sizeof(a)/sizeof(a[1]);
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;i<n;i++){
            if(a[j]>a[min]){
                min=j;
            }
        }
        int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}