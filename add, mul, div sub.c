#include<stdio.h>

int main()
{
    int num1, num2, add, sub, mul, div;
    int rem;

    printf("Input any 2 integer: ");
    scanf("%d %d", &num1, &num2);

    add=num1+num2;
    printf("ADD = %d\n",add);

     mul=num1*num2;
    printf("MUL = %d\n",mul);

    div=num1/num2;
    if (num2==10)
    {
        rem=num1%num2;
        printf("DIV = %d.%d\n",div, rem);
    }
    else
        printf("DIV = %d\n",div);

    sub=num1-num2;
    printf("SUB = %d\n",sub);

    return 0;
}
