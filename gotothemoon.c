// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char str[n];
//     for(int i=0;i<n;i++){
//         scanf("%s",str[i]);
//     }
//     printf("%s",str);
// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                a[j] = -1; // mark as visited
            }
        }
        if (count > 0 && a[i] != -1)
            printf("%d ", a[i]);
    }

    return 0;
}

