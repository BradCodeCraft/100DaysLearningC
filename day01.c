#include <stdio.h>

/* This is Day 1 progress from learning how to program in C*/
int main() {
    printf("Hello World!"); //outputing "Hello World!"
    
    // incorporating breaks into print functions
    printf("There is a break after this sentence. \n");
    printf("There is a line break after this sentence \n\n");
    printf("There is a tab break after this sentence. \t");
    printf("This is a normal sentence. \n");

    // VARIABLES
    int myAge = 20;
    float myCarMileAge = 43126.5;
    char myInitial = 'B';

    // outputing variables
    printf("%i\n", myAge); // works with either "%d" or "%i"
    printf("%f\n", myCarMileAge);
    printf("%c\n", myInitial);
        
    // combining variables and text
    printf("My name is Brad Nguyen, and I am %d.\n", myAge); //the "%d" acts as a placeholder for the variable
    printf("My name is Brad Nguyen, and I am %d years old. My first name initial is %c. \n", myAge, myInitial); // order of variables after the commas matters!
 
    // changing variables' value
    int myAge2024 = 21;
    myAge = myAge2024;
    printf("My age next year will be %i.", myAge);

    // adding variable
    int x = 100;
    int y = 150;
    int sum = x + y;
    printf("\nThe sum of %i and %i is %i.\n", x, y, sum);

    // declaring multiple variables
    int a = 100, b = 150, c = 100;
    printf("%i plus %i plus %i equals %d. \n", a, b, c, a + b + c);

    // declaring mutliples same-valued variables
    int j,k,l;
    j = k = l = 100;

    // C Variables Names:
        // All C variables must be identified with unique names
    int minutesPerGame = 60; //Good
    int mpg = 60; //Bad

    // DATA TYPES: int, float, char, double

    // Format Specifiers: %d or %i, %f, %c, %lf, %s

    // Setting decimal points for float or double
    float pi = 3.14159265;
    printf("\n%.4f", pi);

    // Implicit Conversion (automatically)
    float d = 9;
    printf("\n%.4f", d);

    // Explicit Conversion (manually)
    float division = (float) 5 / 2;
    printf("%f", division);

    // CONSTANTS
        // unchangable and read-only
        // SHOULD be declared in UPPERCASE
    const int BIRTHYEAR = 2002;
    return 0;
}
