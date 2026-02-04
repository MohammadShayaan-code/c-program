// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4,5,6};
//     int d=2,temp[d];
//     d=(6-1)-d;
//     int j=d;
//     d=d%6;
    
//     if(j>=0){

//         for(int i=5;i>=0;i--){
//             a[i]=a[j];
//             j--;
//         }
//     }
    
    
//     for(int i=0;i<6;i++){
//        printf("%d",a[i]);
//     }


// }
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8},d=2,temp[d],j=0,k=7-d;//5,4,3,2,1,0
    for(int i=8-d;i<8;i++){
        temp[j]=a[i];
        j++;
    }
    for(int i=7;i>=0;i--){
        a[i]=a[k];
        k--;
    }
    for(int i=0;i<d;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<8;i++){

        printf("%d ",a[i]);
    }
}