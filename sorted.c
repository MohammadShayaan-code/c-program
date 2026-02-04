#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9},c=0;
    for(int i=0;i<9;i++){
        if(a[i]<=a[i+1])
        {
            c++;
        }
        else{
        
        }
    }
    if(c==8){
        printf("rue");
    }
    else{
        printf("-1");
    }
    // printf("%d",c);
}