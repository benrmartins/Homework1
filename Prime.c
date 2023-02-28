#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    // prompts a user to input a number
    printf("Please input a number: ");

    // initializes variables to store values
    int num;
    bool prime = true;

    // stores user input into a variable
    scanf("%d",&num);


    // checks if not num is 0 or 1 bc 0 and 1 are not prime
    if(num == 0 || num == 1) {
        prime = false;
    }

    // loops through the numbers
    for (int i = 2; i <= num / 2; i++) {
        // checks if num is divisible by each number in the loop
        if (num % i == 0) {
            prime = false;
            break;
        }
    }

    // if prime is true print is prime
    if(prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

}