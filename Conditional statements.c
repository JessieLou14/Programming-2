#include<stdio.h>
#include<string.h>

int main()
{
    char name[30];
    int age;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n\n________________________________\n");
    printf("Name: ");
    puts(name);

    if (age <= 17)
     {
       if (age == 0)
  {
      printf("Age: abc\n");
      printf("Invalid Age, Please Try Again.");
      return 0;
  }
      else
       printf("Age: %d\n", age);
       printf("You are not eligible for voting.\n");
     }

  if (age >= 18)
  {
      printf("Age: %d", age);
     printf("\nYou are eligible for voting.\n");
  }

}
