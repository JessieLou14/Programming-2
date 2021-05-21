#include <stdio.h>
#include<stdlib.h>

int main () //program starts
{
  
  int i,l;
  char string[100];  // return value of main function 
  char string1;
  
    FILE * fptr;
    fptr = fopen("C:\\text.txt","w");
    if (fptr==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    printf("Input how many lines to be appended : ");
    scanf("%d", &l);
    //loop of the program
    for(i = 0; i < l+1;i++)
    {
    fgets(string, sizeof string, stdin);
    fputs(string, fptr);
  }
  fclose (fptr);
    //file reading the appended lines
	fptr = fopen ("C:\\text.txt", "r");  
	string1 = fgetc(fptr);
	while (string1 != EOF)
		{
			printf ("%c", string1);
			string1 = fgetc(fptr);
		}
    fclose (fptr);
  return 0;
}
