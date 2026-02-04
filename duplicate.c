#include<stdio.h>
int main(){
    // int a[]={1,2,2,1,2,3,3},j=1,temp[100],count=0;
    // int t=a[0],nex[100];
    // temp[0]=a[0];
    // // int set<int>st;
    // for(int i=0;i<7;i++){
    //     if(t!=a[i])
    //     {
    //         // a[j]=a[i];
    //         temp[j]=a[i];
    //         t=a[i];
    //         count++;
    //         j++;
            
    //     }
    // }
    // for(int i=0;i<count;i++){
    //     printf("%d",temp[i]);
    // }
    // // printf("%d",count);
    int a[]={1,1,2,3,4,5,2,3,4,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int t=a[0],temp[n];
      temp[0]=a[0];
    int j=1,count=0;
    for(int i=0;i<n;i++){
        if(t!=a[i]){
            temp[j]=a[i];
            j++;
            t=a[i];
            count++;
        }
    }
    
    for(int i=0;i<count;i++){
        for(int j=count-1;j>0;j--){
            if(temp[i]==temp[j]){
                for(int k=j;k<count;k++){

                    a[k]=a[k+1];
                }
                count--;
            }
        }
    }
    for(int i=0;i<=count;i++)
        printf("%d ",temp[i]);
                   
                
}