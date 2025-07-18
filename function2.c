#include <stdio.h>

// parsing arguments through reference
// Parameters should be pointers
int add_nums(int * a, int * b)
{
    *a = 20;
    *b = 20;

    return *a + *b;
}
int main(){
    int num1 = 5;
    int num2 = 5;
    int result;

    result = add_nums(&num1, &num2);
    printf("The value of num1 is %d and num2 is %d\n", num1, num2);
    printf("The result is %d\n", result);
    return 0;
}