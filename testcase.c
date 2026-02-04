// #include<stdio.h>
// int main(){
//     int q;
//     scanf("%d",&q);
//     int n;
//     for(int i=0;i<q;i++){
//         scanf("%d",&n);
//         int t;
//         scanf("%d",&t);
//         int a[n];
//         for(int i=0;i<n;i++){
//             scanf("%d",&a[i]);
//         }
//         for(int i=0;i<n;i++){
//             if(a[i]==t){
//                 printf("%d ",i);
//                 // return 0;
//                 break;
//             }
//         }
//         for(int i=0;i<n;i++){

             
//                 if(t>a[n-1]){
//                     a[n]=t;
//                     n++;

//                     printf("%d",n-1);
//                     break;
//                 }
//                 if(t<a[i]){
//                     // a[i]=a[i+1];
//                     for(int j=n-1;j>=i;j--){
//                         a[j+1]=a[j];
//                     }
//                     n++;
//                     a[i]=t;
//                     break;
//                 }
//                 // break;
                
//             }
            
//             for(int i=0;i<n;i++)
//             {
//                 printf("%d",a[i]);
//             }
//     }

// }
// __________________________________________________________________________________________
#include <stdio.h>

int searchInsert(int nums[], int n, int target) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;  // insert position
}

int main() {
    int n, target;
    scanf("%d", &n);
    int nums[n],q=1;
    for(int i=0;i<q;i++){

        for (int i = 0; i < n; i++)
            scanf("%d", &nums[i]);
        scanf("%d", &target);
        int low = 0, high = n - 1, mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target){

                printf("%d",mid);
                break;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        int pos=low;
    
        
        printf("%d\n", pos);
        break;
    }

    return 0;
}
