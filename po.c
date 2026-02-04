#include<stdio.h>
#include<string.h>
int main(){
    // int x=10;
    // int *p=&x;
    // // printf("%d",*p);
    // int a[]={1,2,3};
    // int *p=a;
    // printf("%d",*p);
    char str[100],rev[100],str2[100];
    fgets(str,sizeof(str),stdin);
    fgets(str2,sizeof(str2),stdin);
    int len=strlen(str);
    int j=0;
    // for(int i=len-1;i>=0;i--){
      

    //         rev[j]=str[i];
    //         j++;
        
    // }
    // printf("%s",rev);
    j=0;
    int len2=strlen(str2);
    int l=len+len2;
    for(int i=len-1;i<=l;i++){
        str[i]=str2[j];
        j++;
    }
    printf("%s",str);
}