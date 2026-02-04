#include<stdio.h>
int main() {
    int a[]={1,2,0,4,7,0,0,4,0},temp[9],j=0,k=1,count=0;
    for(int i=0;i<9;i++){
        if(a[i]!=0){
            
               
                    temp[j]=a[i];
                    count++;
                    j++;
                
            
        }

    }
    
    for(int i=0;i<9;i++){
        if(a[i]==0){
           a[9-k]=a[i];
            k++;
        }
    }
    
    for(int i=0;i<count;i++){
        
        a[i]=temp[i];
    }
    for(int i=0;i<9;i++){
        printf("%d",a[i]);
    }

}


/* OPTIMAL */


// #include<stdio.h>
// int main() {
//     int a[]={1,2,0,4,7,0,0,4,0},temp,j=-1;
//     for(int i=0;i<9;i++){
//         if(a[i]==0){
//            j=i;
//            break;
//         }
//     }
//     for(int i=j+1;i<9;i++){
//         if(a[i]!=0){
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             j++;
//         }
//     }
//     for(int i=0;i<9;i++)
//          printf("%d",a[i]);
// }
