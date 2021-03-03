#include<stdio.h>

int main()
{
    int num1;
    printf("input any integer: ");
    scanf("%d", &num1);

    switch (num1)
    {
    case -6:
        printf("The integer is a negative number");
        break;
    case 5:
        printf("The integer is a positive number");
        break;
    default:
        printf("The input data is invalid");
        break;
    }

    return 0;
}
