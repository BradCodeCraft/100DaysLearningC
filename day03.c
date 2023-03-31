#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // SWITCH
        // Replaces multiple else if statements
        // Can't compare => Not as useful
    int day = 1;

    switch (day) {
        case 1:
            printf("It's Sunday. \n");
            break;
        case 2:
            printf("It's Monday. \n");
            break;
        case 3:
            printf("It's Tuesday. \n");
            break;
        case 4:
            printf("It's Wednesday. \n");
            break;
        case 5:
            printf("It's Thursday. \n");
            break;
        case 6:
            printf("It's Friday. \n");
            break;        
        case 7:
            printf("It's Saturday. \n");
            break;
        default:
            printf("Invalid day! \n");
    }

    // WHILE LOOP
    int x = 0;
    while (x < 5) {
        printf("%d\n", x);
        x++;
    }
        // do while loop
        int y = 5;
        do {
            printf("%d\n", y);
            y--;
        } while (y > 0);

    // FOR LOOP
        // for (statement 1; statement 2; statement 3)
            // Statement 1 is executed (one time) before the execution of the code block.
            // Statement 2 defines the condition for executing the code block.
            // Statement 3 is executed (every time) after the code block has been executed.
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int a,b;
    for (a=0; a<10; a++){
        printf("Outer: %d\n", a);
        for (b=0; b<10; b++){
            printf("Inner: %d\n Product: %d\n", b, a * b);
        }
    }

    // BREAK & CONTINUE
        // break: stop the loop
            int c;
            for (c = 0; c < 4; c++) {
                printf("%d\n", c);
                if (c == 4) {
                    break;
                }
            }    
        // continue: skip the condition in the loop
            // the command (e.g. printf) should be after the condition!!
            int d;
            for (d=10; d > 0; d--) {
                if (d == 4) {
                    continue;
                }
                printf("%d\n", d);
            }
        // this should skip if e or f equal 0
        int e,f;
        for (e = 0; e <= 10; e++) {
            if (e == 0) {
                continue;
            }
            printf("The value of the outer variable is: %d\n", e);
            for (f = 0; f <= 10; f++) {
                if (f == 0) {
                    continue;
                }
                printf("The value of the inner variable is: %d\n", f);
                printf("The product of the two variables is: %d\n", e * f);
            }
        }    

    // ARRAYS
    int qtrPercentages[] = {25, 50, 75, 100};
    // %% adds the "%" sign
    printf("The first quarter of the percent scale is: %d%%\n", qtrPercentages[0]);
    // changing an element of an array
    qtrPercentages[0] = 0;
    printf("The new first quarter of the percent scale is: %d%%\n", qtrPercentages[0]);
    // loop through all the elements of qtrPercentages:
    for (i = 0; i < 4; i++) {
        printf("%d%%\n", qtrPercentages[i]);
        }
    // set array size (e.g: this sets an array of 100 elements and the for loop adds the elements in it)
    int zeroToOneHundred[101];
    for(i = 0; i < 101; i++) {
        zeroToOneHundred[i] = i;
        printf("%d\n", zeroToOneHundred[i]);
    }    
    // Multidimensional array
    int twoDimensionArray[2][3] = {{1,2,3}, {4,5,6}}; 
        // [2]: number of rows
        // [3]: number of columns
    // change an element of an array
    printf("The original third element on the first row is: %d\n", twoDimensionArray[0][2]);
    twoDimensionArray[0][2] = 7;
    printf("That value has changed to: %d\n", twoDimensionArray[0][2]);

    // STRINGS
        // Strings are rephrased as an array
        char greeting[] = "Hello World";
        printf("%s\n", greeting);
        // a different way to create a string
        char salutation[] = {'G','o','o','d','b','y','e','\0'};
            // '\0' is a null terminating character. It tells C that this is the end of the array
        printf("%s", salutation);
        // take the first element of a string
        printf("%c\n", greeting[0]); // the specifier is for char not string!!
        // Special characters: "\'" (adds single quote), '\"' (adds double quote), "\\" (adds backslash)
        // Strings functions:
        char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
        printf("%d\n", strlen(alphabet));
        printf("%d\n", sizeof(alphabet)); // sizeof includes "\0"
            // sizeof also returns the memory size (in bytes)
                // i.e, if the alphabet array is now alphabet[50], sizeof(alphabet) will return the number 50!!
            // concatenate strings
            char str1[100] = "Hello "; // have to preset the length of the first array, e.g. str1[100]
            char str2[] = "There";
            strcat(str1,str2); //strcat stores the concatenation in the first array, i.e, str1
            printf("%s\n", str1);
            // copy strings
                // have to set the length of the copied array, e.g., str3[100]
            char str3[100];
            strcat(str3,str1);
            printf("%s\n", str3);
            // comparing strings
            char name1[] = "Brad";
            char name2[] = "Kyle";
            char name3[] = "Brad";
            printf("%d\n", strcmp(name1,name2)); // values that is different from 0 means false
            printf("%d\n", strcmp(name1,name3)); // 0 means true

    return 0;
}