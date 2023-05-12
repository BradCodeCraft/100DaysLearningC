#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() 
{
// User Input
/*
    int testInteger;
    printf("Enter an integer: \n");
    scanf("%d", &testInteger);
    printf("You entered %d", testInteger);

    // Multiple Inputs
    int myNum;
    char myChar;
    printf("Enter a number and a character: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("Your number is %d", myNum);
    printf("Your character is %c", myChar);

    // Taking String Input
    char firstName[100];
    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s", firstName);
*/

// Memory Address
    int myAge = 20;
    printf("%p\n", &myAge);
    /*
    Pointers are important in C, because they allow us to manipulate the data in the  
    computer's memory - this can reduce the code and improve the performance.
    */

// Pointers
    int myNum = 69; //nice
    printf("%d\n", myNum); // output: 69
    printf("%p\n", &myNum); // output: 0x16fd7f344

    int* ptr = &myNum; // "*" is known as the dereference operator
    /*
    When used in declaration, like above, it creates a pointer variable
    When not, it acts as a dereference operator
    */
    printf("%p\n", ptr); //output: 0x16fd7f344

    return 0;
} 