#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter the marks for student %d :  ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for student %d is %d. \n", i + 1, marks[i]);
    }
    // for(int num : arr){//for every element in the array, print the element.
    //     printf("%d ",num);//here,num represents element of the arraay
    // }    =--->    // this syntax is only valid in java.

    return 0;
}