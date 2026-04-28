#include <stdio.h>
#include <ctype.h>

int calc(int x ,char operation , int y);

int main()
{
    while(1)
    {
        int num1 ;
        int num2 ;
        char letter ;
        printf("Enter the first letter of the operation (A/S/M/D):");
        scanf(" %c" , &letter );
        printf("First number: ");
        scanf("%i", &num1);
        printf("Second number: ");
        scanf("%i", &num2);
        // pass the values to the function
        int answer = calc(num1 , toupper(letter) , num2);

        // print the answer
        printf( "The answer is: %i\n" , answer);

        char question ;
        printf("Do you want to calculate anything else? (y/n):");
        scanf(" %c" , &question);
        if (question == 'n' || question == 'N')
        {
            return 0 ;
        }
    }
}



// calculations function
int calc(int x ,char operation , int y)
{
    if (operation   == 'A')
    {
        return x + y ;
    }
    else if (operation == 'S')
    {
        return x - y ;
    }
    else if (operation == 'M')
    {
        return x * y ;
    }
    else if (operation == 'D')
    {
        return x / y ;
    }
    
}