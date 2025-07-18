
// type name value

#include <stdio.h>

int main()
{
    int num_of_apples; //declaring an integer
    num_of_apples = 80;

    printf("You have %d apples \n", num_of_apples);

    // declaring a float
    float bank_balance;
    bank_balance = 1250.50;

    printf("Your bank balance is $%f\n ", bank_balance);

    // declaring a character
    char exam_grade = 'C'; //put it into single quotes trust me

    printf("You exam grade is %c\n ", exam_grade);

    // declaring a  string
    char name [] = "Vanessa";

    printf("Your name is %s\n", name);

    // declating a ponter
    int *pointer_name = &num_of_apples;

    printf("The memory addresss of the apples  is %p \n", pointer_name);

    return 0;

}