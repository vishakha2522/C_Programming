/*
Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)

Input :  23   30
Output : 212

Input :  10   18
Output : 126

Input :  -10   2
Output : Invalid range

Input :  90   18
Output : Invalid range
*/

    #include<stdio.h>
    #include<stdlib.h>
    void RangeDisplay(int iStart,int iEnd)
    {
    if(iStart < 0 || iEnd < 0 ||iEnd >iStart)
    {
        printf("Invalid Number \n");
        return;
    }
    int iCnt = 0 , iSum = 0 ;
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    printf("%d\t",iSum);
    }
    int main()
    {
        int iValue1 = 0,iValue2 = 0;

        printf("Enter starting point :\n");
        scanf("%d",&iValue1);

        printf("Enter ending point :\n");
        scanf("%d",&iValue2);

        RangeDisplay(iValue1,iValue2);

        return 0;
    }