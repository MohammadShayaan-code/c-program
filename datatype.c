
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);

    return 0;
}

#include <stdio.h>
int main()
{
    float a;
    printf("Enter a float number: ");
    scanf("%f", &a);
    printf("You entered: %.2f\n", a);
    return 0;
}


#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);   
    printf("You entered: %c\n", a);
    return 0;
}

#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter a string: ");
    scanf("%s", a);   
    printf("You entered: %s\n", a);
    return 0;
}
