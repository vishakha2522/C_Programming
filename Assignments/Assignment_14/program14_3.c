/*
3.Write a program which accept number from user and display all its non factors.

Input :  12
Output : 5  7  8  9  10  11

Input :  13
Output : 2  3  4  5  6  7  8  9  10  11  12

Input :  10
Output : 3  4  6  7  8  9
*/

#include<stdio.h>
#include<stdlib.h>

int NonFact(int ino)
{ 
    int icnt = 0;
    int ifact = 1;

    for(icnt = ino-1 ; icnt >1 ; icnt--)
    {
        if(ino % icnt != 0)
        {
            printf("%d\t",icnt);
        }     
    }return ifact;               
}

int main()

{
    int iValue = 0 ; int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = NonFact(iValue);
    printf("%d",iRet);

    return 0;
} 