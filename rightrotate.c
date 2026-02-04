#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int d=2,temp[d];
    d=(6-1)-d;
    int j=d;
    d=d%6;
    // for(int i=6;i>d;i--){
    //     temp[i]=a[i];
    // }
    if(j>=0){

        for(int i=5;i>=0;i--){
            a[i]=a[j];
            j--;
        }
    }
    // for(int i=9-d;i<9;i++){
    //     a[i]=temp[i-(9-d)];
    // }
    
    for(int i=0;i<6;i++){
       printf("%d",a[i]);
    }


}