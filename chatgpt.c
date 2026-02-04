// #include <stdio.h>

// int main() {
//     int m;
//     printf("Enter your marks: ");
//     scanf("%d", &m);

//     if(m <= 100 && m > 90) {
//         printf("Your grade is A+");
//     }
//     else if(m <= 90 && m > 80) {
//         printf("Your grade is A");
//     }
//     else if(m <= 80 && m > 70) {
//         printf("Your grade is B+");
//     }
//     else if(m <= 70 && m > 60) {
//         printf("Your grade is B");
//     }
//     else {
//         printf("Your grade is below C");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main() {
//     printf("Pointer size: %zu bytes\n", sizeof(void*));
//     return 0;
// }

//================================
// #include <stdio.h>

// // Function declaration
// int square();

// // Function definition




// int square() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     return n * n;   // returning value
// }

// int main() {
//     int result;
//     result = square();   // function call
//     printf("Square = %d\n", result);
//     return 0;
// }

//=====================================

#include <stdio.h>

// Function to display array elements
void displayArray(int arr[], int size) {
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Passing array to function
    displayArray(arr, 5);

    return 0;
}

