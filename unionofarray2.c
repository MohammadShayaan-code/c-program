#include<stdio.h>
int main(){
    int a[]={1,2,1,4,3,5,4},b[]={6,7,6,8,9,8,4};
    int na=sizeof(a)/sizeof(a[0]),nb=sizeof(b)/sizeof(b[0]);
    int j=0,c[na+nb],k=0;
    for(int i=na;i<na+nb;i++){
        c[i]=b[j];
        j++;
    }
    for(int i=0;i<na;i++){
        c[i]=a[k];
        k++;
    }
    int static count;
    
                                                                                    // for(int i=0;i<na+nb;i++){
                                                                                    //     printf("%d ",c[i]);
                                                                                    // }
    int size=na+nb;
    for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(c[i]==c[j]){
                    for(int k=j;k<size;k++){
                        c[k]=c[k+1];
                    }
                    size--;
                    j--;
                }
        }
    }
    // printf("qwertyui %d",size);
    for(int i=0;i<size;i++){
        printf("%d",c[i]);
    }
    

}