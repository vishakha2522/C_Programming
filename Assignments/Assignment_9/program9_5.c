/*
    Write a program which retruns difference between Even factorial and odd factorial of given number

    Input: 5
    Output: -7 (8 -15)

    Input: -5
    Output: -7 (8 *15)

    Input: 10
    Output: 2895 (3840 - 945)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEven = iEven * iCnt;   
    }

    
    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOdd = iOdd * iCnt;     
    }

    iDiff = iEven - iOdd;

    return iDiff;

}

int main()                  
{
    int iValue = 0;         
    int iRet = 0;           
    printf("Enter number: ");   

    scanf("%d", &iValue);       

    iRet = FactorialDiff(iValue);   

    printf("Factorial difference is %d\n", iRet);   
    return 0;               
}