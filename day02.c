#include <stdio.h>
#include <stdbool.h>

int main() {
    // OPERATORS
        // Arithmetic op: +, -, *, /, %, ++ (increase by 1), -- (decrease by 1)
        int remainder = 5 / 2;
        int x = 3;
        ++x; // x = 4
        --x; // x = 3
        // Assignment op: =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
        
        // Comparison op: ==, !=, >, <, >=, <=
        printf("%d", 3 != 4);
        // Logical op: && (and), || (or), ! (not)
        
        //Sizeof op:
        int myInt;
        float myFloat;
        double myDouble;
        char myChar;

        printf("%lu\n", sizeof(myInt));
        printf("%lu\n", sizeof(myFloat));
        printf("%lu\n", sizeof(myDouble));
        printf("%lu\n", sizeof(myChar));

    // BOOLEANS
        // TRUE/FALSE (bool)
        // Needs #include <stdbool.h> to work
        bool hoosier = true;
        bool boilermaker = false;
        printf("%d\n", hoosier);
        printf("%d\n", boilermaker);

    // If...else
    if (9 > 10) {
        printf("The World is collapsing!!!\n");
    } else {
        printf("Ignore this! \n");
    }

    if (hoosier == true) {
        printf("GO HOOSIER!");
    } else if (boilermaker == true) {
        printf("CHOOO CHOOOO PURDUE");
    } else {
        printf("I don't know other chants");
    }
    printf("\n");

        // Short hand if...else
        int time = 10;
        (time < 12) ? printf("Good Morning.") : printf("Good Evening.");
        

    return 0;
}