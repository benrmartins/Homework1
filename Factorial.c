#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("Please input a number: ");

    int num;
    int factorial = 1;

    scanf("%d",&num);

    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("The Factorial of %d is %d", num, factorial);


}