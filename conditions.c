#include <stdio.h>

int main(){
    int x;
    int y;

    x = 10;
    y = 20;

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if( x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("It seem x and y are equal\n");
    }
};