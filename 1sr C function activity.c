#include <stdio.h>

void addnumber(int func_num1, int func_num2, int func_num3, int func_4, int func_5);


int main()
{
    int num1, num2, num3, num4, num5,result;
    printf("enter five grades: ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    //pass arguments
    addnumber(num1,num2,num3,num4,num5);
    return 0;
}

// return type is void meaning doesn't return any value
void addnumber(int func_num1, int func_num2, int func_num3, int func_4, int func_5)
{
    printf("the result average is %d", (func_num1+func_num2+func_num3+func_4+func_5)/5);
}
