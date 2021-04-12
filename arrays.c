#include<stdio.h>
int main ()
{
    int element[8],e, array, sum=0;//declaration of array

    printf("enter size of array: ", array);
    scanf("%d", &array);
    //conditional statements
    if (array>11)
    {
        printf("Array size limit is 5 to 10 only.");
        return 0;
    }
    if (array<4)
    {
        printf("Array size limit is 5 to 10 only.");
        return 0;
    }
    printf("____________________________________\n\n");
    printf("size of array: %d\n", array);
    //traversal array
    for(e=0;e<array;++e)
    {
        printf("element %d: ", e+1);
        scanf("%d", &element[e]);
        //adding the elements created by the user
        sum += element[e];
    }
    printf("Sum of all array elements: %d\n", sum);

    return 0;
    }
