#include <stdio.h>

int main(int argc, char *argv[]) {

    // initializes variables to store values
    int num1;
    int num2;
    int total;
    char operation;

    // stores user input into a variable
    sscanf(argv[1], "%d", &num1);
    sscanf(argv[2], "%c", &operation);
    sscanf(argv[3], "%d", &num2);

    // checks to see which operation the user inputs
    // does the operation on the two numbers
    if (operation == '+') {
        total = num1 + num2;
    } else if (operation == '-') {
        total = num1 - num2;
    }  else if (operation == '*') {
        total = num1 * num2;
    } else if (operation == '/') {
        total = num1 / num2;
    }  else if (operation == '%') {
        total = num1 % num2;
    }  else {
        printf("Incorrect input.");
    }

    // Prints out the result to the terminal
    printf("Result: %d\n", total);

    return 0;


}