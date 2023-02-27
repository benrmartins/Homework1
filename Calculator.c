#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("Enter expression: ");

    int num1;
    int num2;
    int total = 0;
    char operation;

    sscanf(argv[1], "%d", &num1);
    sscanf(argv[2], "%c", &operation);
    sscanf(argv[3], "%d", &num2);

    if (operation == '+') {
        total = num1 + num2;
    } else if (operation == '-') {
        total = num1 - num2;
    } else if (operation == '/') {
        total = num1 / num2;
    }  else if (operation == '/') {
        total = num1 / num2;
    }  else if (operation == '/') {
        total = num1 / num2;
    } else {
        printf("Incorrect input.");
    }

    printf("Result: %d\n", total);

}