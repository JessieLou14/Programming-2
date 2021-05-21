#include <stdio.h>
#include <string.h>

void printReverse(char str[])
{
    int length = strlen(str);

    // string accross to the end 
    int i;
    for (i = length - 1; i >= 0; i--) 
    {
        if (str[i] == ' ') 
        {
            //putting the NULL to separate words by words
            str[i] = '\0';
            // Start from next charatcer
            printf("%s ", &(str[i]) + 1);
        }
    }
}

// Driver code
int main()
{
    char str[50];
    printf("Enter any string: ");
    gets(str);
    printf("Reverse ordered words\n");
    printReverse(str);
    puts(str);
    return 0;
}