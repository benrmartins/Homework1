#include <stdio.h>

int main(int argc, char *argv[]) {

    // prompts a user to input the radius
    printf("Please enter the radius of the circle ");

    // initializes variables to store values
    int radius;
    float pi = 3.14159;
    float circumference;

    // stores user input into a variable
    scanf("%d",&radius);

    // calculates the circumference and stores it
    circumference = 2 * pi * radius;

    // prints out the circumference to the terminal
    printf("The circumference of the circle is %f\n", circumference);


}