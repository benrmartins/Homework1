#include <stdio.h>

int main(int argc, char *argv[]) {

    // prompts a user to input a number
    printf("Please input a number: ");

    // initializes variables to store values
    int num;
    int factorial = 1;

    // stores user input into a variable
    scanf("%d",&num);

    // stores the factorial by using a for loop
    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Prints the Factorial to the terminal
    printf("The Factorial of %d is %d\n", num, factorial);

    return 0;


}