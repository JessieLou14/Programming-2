#include <stdio.h>
#include <string.h>
int main()
{
    char string1[300];
    int  v, count = 0, count2 = 0;
   printf("Input a sentence: ");
   gets(string1);

    //loop for counting vowels and consonants
   for (v=0;v<strlen(string1); v++)
    {
        if (string1[v]=='a'|| string1[v]=='e'|| string1[v]=='i' ||string1[v]=='o' ||string1[v]=='u'){
            count++;
        }
        if (string1[v]=='b'|| string1[v]=='c'|| string1[v]=='d' ||string1[v]=='f' ||string1[v]=='g'
            ||string1[v]=='h'|| string1[v]=='j'|| string1[v]=='k' ||string1[v]=='l' ||string1[v]=='m'
            ||string1[v]=='n'|| string1[v]=='x'|| string1[v]=='p' ||string1[v]=='q' ||string1[v]=='r'
            ||string1[v]=='s'|| string1[v]=='t'|| string1[v]=='w' ||string1[v]=='v' ||string1[v]=='y'
            ||string1[v]=='z'){
                count2++;
            }
   }
    //loop for converting lowercase to uppercase letter
    v=0;
    while (string1[v]!='\0')
    {
        if(string1[v]=='a' ||string1[v]=='e' ||string1[v]=='i' ||string1[v]=='o' ||string1[v]=='u') string1[v]=string1[v]-32;
        v++;
    }
    //print the output
    printf("String Converted:");
    puts(string1);
    printf("\nString Length: %d\n", v);
    printf("Vowels: %d\n", count);
    printf("Consonants: %d", count2);
}

