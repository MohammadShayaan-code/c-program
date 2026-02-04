// #include<stdio.h>
// void arr(int a[]);
// int main(){
//     int a[]={1,2,3,4};
//     arr(a);
    
//     // printf("%d",a);
// }
// void arr(int a[]){
//     for(int i=0;i<4;i++){
//         printf("%d " ,a[i]);
//     }
// }
// #include <stdio.h>

// // Recursive function to display array elements
// void displayArray(int arr[], int index, int size) {
//     if (index == size) {
//         return; // base case
//     }

//     printf("%d ", arr[index]);
//     displayArray(arr, index + 1, size); // recursive call
// }

// int main() {
//     int numbers[] = {10, 20, 30, 40, 50};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     // Passing array to recursive function
//     displayArray(numbers, 0, size);

//     return 0;
// }
#include<stdio.h>
void arr(int a[],int size,int i){
    if(i==size) return;
    printf("%d ",a[i]);
    arr(a,4,i+1);
}
int main(){
    int a[]={1,2,3,4};
    arr(a,4,0);

}