/* Accept one number from user and printf that number of * on screen*/

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf(" * ");
        
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}