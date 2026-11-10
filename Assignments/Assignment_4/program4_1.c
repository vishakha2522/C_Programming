/*
    Check Whether a number is positive or negative
    Problem statement: Write a C program that accepts an integer from the user and determines whether the entered number is positive, negative, or zero

    Expected Output:
    Input: 15--> Positive Number
    Input: -8--> Negative Number
    Input:  0--> zero

*/

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if(iValue < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}