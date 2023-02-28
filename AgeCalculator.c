#include <stdio.h>

int main(int argc, char *argv[]) {

    // initializes variables to store values
    char name[50];
    int birthMonth, birthDay, birthYear;
    int day;

    // prompts a user for an input in the terminal
    printf("Please Enter Your Name ");
    scanf("%s",&name);
    printf("Please Enter Your Birth Month ");
    scanf("%d",&birthMonth);
    printf("Please Enter Your Birth day ");
    scanf("%d",&birthDay);
    printf("Please Enter Your Year ");
    scanf("%d",&birthYear);

    // calculates the year
    int year = 2022 - birthYear;
    // calculates the Month
    int month = 12 - birthMonth + 2;
    // if the month is greater than 12, subtracts 12 and add 1 to the year
    if(month > 12) {
        month = month - 12;
        year = year + 1;
        // if the month is equal to 12, month becomes 0 and adds 1 to year
    } else if(month == 12) {
        month = 0;
        year = year + 1;
    }

    // checks if the birthday is less than the current day
    if(15 > birthDay) {
        day = 15 - birthDay;
        // checks if the birthday is greater than the current day
    } else if(15 < birthDay) {
        day = 31 - birthDay + 15;
    } else {
        day = 0;
    }

    // prints out the age to the terminal
    printf("Hello, %s! You are %d years, %d months, and %d days old\n", name, year, month, day);
    return 0;

}