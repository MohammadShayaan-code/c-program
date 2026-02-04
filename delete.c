#include<stdio.h>
int main(){
//    int ;
//    printf("%d",'a');
for(int i='a';i<='z';i++){
    printf("%d\t",i);
}

}//32------>57

// #include <stdio.h>

// int main(void) {
//     int n;
//     printf("Enter number of terms: ");
//     if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid input\n");
//         return 1;
//     }

//     int a = 0, b = 1;
//     if (n >= 1) printf("%d ", a);
//     if (n >= 2) printf("%d ", b);

//     for (int i = 3; i <= n; i++) {
//         int c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
//     return 0;
// }