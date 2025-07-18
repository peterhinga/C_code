#include <stdio.h>

int main()
{
    // A string is a sequence of characters

    char name[9] = "Vanessa";
     
    printf("My name is %s \n", name);

    // dealing with a null character
  //  name[9] = 'K';

    //printf("My name is %s %c", name);

    name[7] = ' ';
    name[8] = 'K';

    printf("My name is %s %c \n", name);

    return 0;
}