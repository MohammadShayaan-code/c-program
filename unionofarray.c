#include<stdio.h>
int main(){
    int a[]={2,2,6,8,7,5},b[]={2,3,4,7,8,5},c[345]; // 2,6,8,7,5,3
    // int a[]={1,1,2,3,4,5},b[]={2,3,4,4,5},c[34567];// 1,2,3,4,5
    int na=6,nb=5,j=0;
   for(int i=na;i<na+nb;i++){
        c[i]=b[j];
        j++;
   }


   int static count,cnt;
   for(int i=0;i<na;i++){
        c[i]=a[i];
        count++;
   }
//    for(int i=0;i<na+nb;i++)
//     printf("%d ",c[i]);


/*REMOVING DUPLICATES*/
for(int i=0;i<na+nb;i++){
    for(int j=i+1;j<na+nb;j++){
        if(c[i]==c[j]){
            for(int k=j;k<na+nb;k++){
                c[k]=a[k+1];
            }
            na+nb--;
            j--;
        }
    }
}
for(int i=0;i<na+nb;i++)
    printf("%d",c[i]);






}