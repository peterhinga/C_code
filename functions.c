#include <stdio.h>

//no return value
//void addCustomer(char[] name, int telNumber){

//}

int add_nums(int a, int b){
    return a + b;
}
int main()
{
    int num1;
    int num2;
    int result;

    num1 = 3;
    num2 = 3;

    result = add_nums(num1, num2);
    printf("The result is %d\n",  result);
    return 0;
}