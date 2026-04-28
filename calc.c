#include <stdio.h>
#include <ctype.h>

int calc(int x ,char operation , int y);
void cleanbuffer();

int main()
{
    while(1)
    {
        int num1 ;
        int num2 ;
        char letter ;
        printf("Enter the first letter of the operation (A/S/M/D):");
        if (scanf(" %c" , &letter ) != 1)
        {
            printf("invalid input\n");
            cleanbuffer();
            continue;

        }
        char Uletter = toupper(letter);
        
        // if the user typed invalid char
        if (Uletter != 'A' && Uletter != 'S' && Uletter != 'M' && Uletter != 'D' )
        {
            printf("invalid input. please try again.\n");
            cleanbuffer();
            continue ;
        }
        printf("First number: ");
        if (scanf("%i", &num1) != 1)
        {
            printf("invalid input. please try again.\n");
            cleanbuffer();
            continue;
        }
        printf("Second number: ");
        if (scanf("%i", &num2) != 1)
        {
            printf("invalid input. please try again.\n");
            cleanbuffer();
            continue;
        }

        // in case of division by zero
        if (Uletter == 'D' && num2 == 0)
        {
            printf("Math error: division by zero\n");
            continue;
        }
        // pass the values to the function 
        int answer = calc(num1 , Uletter , num2);

        // print the answer
        printf( "The answer is: %i\n" , answer);

        // if the user want to exit 
        char question ;
        printf("Do you want to calculate anything else? (y/n):");
        if (scanf(" %c" , &question) != 1)
        {
            printf("invalid input\n");
            cleanbuffer();
            continue;
        }

        if (toupper(question) == 'N')
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

    // if something went wrong
    printf("Error");
    return 0 ;
}

void cleanbuffer()
{
    while (getchar() != '\n'); // clean the input buffer
}