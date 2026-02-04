#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("%d\n", a & b);  // AND
    printf("%d\n", a | b);  // OR
    printf("%d\n", a ^ b);  // XOR
    printf("%d\n", ~a);     // NOT
    printf("%d\n", a << 1); // Left shift
    printf("%d\n", a >> 1); // Right shift
    return 0;
}