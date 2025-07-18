#include <stdio.h>

int main(){
    int brothers;

    int *pt;
    pt = &brothers;

    // exercise 
    int a = 30;

    int *pointer = &a;

    printf("THe address of pointer is %p \n", &pointer);
    printf("The address stored in a %p \n",  &a);

    *pointer = 200;

    printf("The value of a is %d \n", a);

    // Null pointer
    // assign NULL if you are not assigning a value at declaraation time

    int *pointertwo = NULL;

    // Arrays and Pointers

    int apples[5] = {1, 2, 3, 4, 5};
    int *apple = &apples[0];

    printf("THe address of apple is %p \n", &apple);
    printf("The address stored in apple is %p \n", apple);
    printf("The address of apples is %p \n", &apples);
    printf("The address of the first element in apples is %p \n", &apples[0]);
    printf("The value that apple is pointing to is %d \n", *apple);

    apple = apple + 3;

    printf("After moving three indexes forward to the 4th element the address stored in apple is %p \n", apple);
    printf("The Value apple is pointing to is %d\n", *pt);

    apple--; // same as apple = apple -1
    printf("You have moved one index backward your so address in apple is %p\n", apple);
    printf("The value in apple is pointing to is %d \n", *apple);

    *apple = 88;
    printf("The value stored in apple is pointing to is %d \n", apples[2]);

   

    return 0;
}