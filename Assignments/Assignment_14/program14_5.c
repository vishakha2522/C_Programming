/*
5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input :  12
Output : -34   (16 - 50)

Input :  10
Output : -29   (8 - 37)
*/

#include<stdio.h>
#include<stdlib.h>
int FactDiff(int ino)
{
    int icnt = 0,factsum = 0,nonfactsum = 0;
    for(icnt = 1 ; icnt < ino ;icnt++)
    {
        if(ino % icnt == 0)
        {
            factsum = factsum + icnt;
        }
        else
        {
            nonfactsum = nonfactsum + icnt;
        }
    }return factsum - nonfactsum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;

}