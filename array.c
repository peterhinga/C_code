#include <stdio.h>

int main()
{
    // when creatng an array you have to specify the size and initialize every element using braces and commas

    int chemistry_scores[5] = {20, 30, 40, 26, 50};

    // initializing an arry with fewer characters

    int math_scores[5] = {80, 90};

    // initializing an array without specifying a size

    int eng_scores[] = {50, 60, 70, 80, 90, 18, 90};

    // exercise

    int student_id;
    int ids[3] = {200, 100, 400};
    student_id = ids[1];

    printf("%d\n ", student_id);

    char color[5] = {'b', 'l', 'a', 'c', 'k'};

    printf("The last element is %c \n", color[4]);

    return 0;

}