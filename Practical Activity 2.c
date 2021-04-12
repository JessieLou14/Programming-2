#include <stdio.h>

//checking for log in information/ credentials
int information(int id_number, int pin_number);

//login fuctions
void x(int stat);

int main()
{
    //variables(temporary)
    int id_number, pin_number, stat1;

    //user info
    printf("Enter ID Number: ");
    scanf("%d", &pin_number);

    printf("Enter Your PIN: ");
    scanf("%d", &id_number);

    //pass arg
    stat1 = information(id_number,pin_number);

    //pass with the return value
    login(stat1);

    return 0;
}

int information(int id_number, int pin_number)
{
    //predefined variables
    int array[3][2] = {{5555,1100}, {6789,1110},{2211,1101}};

int i, j;


/* output each array element's value */
//loop for array
for ( i = 0; i < 3; i++ )
    {

for ( j = 0; j < 2; j++ )

    //conditional statements
    if (id_number == array[0][0] && array[0][1])
    {
        return 1;
    }
     if (id_number == array[1][0] && array[1][1])
    {
        return 1;
    }
     if (id_number == array[2][0] && array[2][1])
    {
        return 1;
    }

    // not true, return 2
    else
    {
        return 2;
    }
}
}

void login(int x, int id_number)
{
    // return value
    if(x == 1)
    {
        printf("\nYou have successfully Logged In!\n");
        printf("ID#:%d", id_number);
    }
    else
    {
       printf("\nInvalid ID/PIN!");
    }

}


