/*
    Write a program to find odd factorial of given number

    Input: 5
    Output: 15   (5 * 3 * 1)

    Input: -5
    Output: 15   (5 * 3 * 1)

    Input: 10
    Output: 945   (9 * 7 * 5 * 3 * 1)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}