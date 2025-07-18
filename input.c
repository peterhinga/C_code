#include <stdio.h>

int main(void)
{
    char name[5];
    printf("What is your name:\n");
    scanf("%s", name);

    printf("Your name is %s \n", name);
    return 0;
}