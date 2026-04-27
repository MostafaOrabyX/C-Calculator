#include <stdio.h>
#include <ctype.h>

int calc(int x ,char operation , int y);

int main()
{

    int num1 ;
    int num2 ;
    char letter ;
    printf("Write the first letter of the operation you want\nAddition | Subtraction | Multiplication | Division\n: ");
    scanf("%c" , &letter );
    printf("First number : ");
    scanf("%i", &num1);
    printf("Second number : ");
    scanf("%i", &num2);
    // pass the values to the function
    int answer = calc(num1 , toupper(letter) , num2);

    // print the answer
    printf("the answer is %i\n" , answer);
    

    return 0 ;
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