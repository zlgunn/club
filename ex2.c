#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int age = 25; /* An integer is any whole numerical value (NO DECIMAL POINTS ALLOWED) */
    double GPA = 2.1; /* A double is a numerical value with decimal values after the decimal point */
    char letter_grade = 'C'; /* A char is a single character, can be A..Z, 0..9 or any symbol/punctuation */
    char first_name[] = "John"; /* A char with [] after the variable name is considered a string */
    char last_name[] = "Doe"; /* A string is just a word (basically a bunch of characters put together) */

    printf("You are %d years old.\n",age); /* In this case, %d is replaced with the value of our variable 'age' */
    printf("Your GPA is %f\n",GPA); /* %f is now replaced with our 'double GPA' variable */
    printf("That means your average letter grade is a %c.\n",letter_grade); /* Same as above */
    printf("Your name is %s %s.\n",first_name,last_name); /* %s %s are replaced with first and last name, respectvely */

    return 0;
}
