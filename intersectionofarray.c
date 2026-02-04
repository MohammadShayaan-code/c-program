#include<stdio.h>
int main(){
    int a[]={1,1,2,3,4,5,8},b[]={2,3,4,4,5},c[23],count=0;
    int na=sizeof(a)/sizeof(a[0]),nb=sizeof(b)/sizeof(b[0]);
    int k=0;
    // printf(" %d ",na);
    for(int i=0;i<na;i++){
        for(int j=0;j<nb;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                count++;
                k++;
            }
        }
    }                               
    int t=c[0],temp[123456],m=1,cnt=0;
    for(int i=1;i<count;i++){
        if(t!=c[i]){
            temp[m]=c[i];
            m++;
            cnt++;
            t=c[i];
        }

    }
    temp[0]=c[0];
    for(int i=0;i<=cnt;i++){
        printf("%d",temp[i]);
    }
}