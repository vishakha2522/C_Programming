/*
4.Write a program which accept number from user and return summation of all its non factors.

Input :  12
Output : 50

Input :  10
Output : 37
*/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int ino)
{ 
    int icnt = 0;
    int isum = 0;

    for(icnt = ino - 1 ; icnt >=1 ; icnt--)
    {
        if(ino % icnt != 0)
        {
            isum = isum + icnt;
        }     
    }return isum;               
}

int main()

{
    int iValue = 0 ; int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
} 