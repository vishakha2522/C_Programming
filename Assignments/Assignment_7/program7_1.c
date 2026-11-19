/*
    Write a program that accepts a number from the user and prints the pattern of $ and * on the screen.
    Input:  5
    Output: $   *   $   *   $   *   $   *   $   *
    
    Input:  3
    Output: $   *   $   *   $   *

    Input:  -3
    Output: $   *   $   *   $   *   
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;       //counter varible for loop

    if(iNo < 0)         //to check number is negative or not
    {
        iNo = -iNo;     // handle negative input
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)      // loop starts from 1 to iNo, everytime iCnt value increased by 1
    {
        printf("$\t*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;     //this varaible ie used to store number given from user

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}