/*
Write a program which accept range from user and display all numbers in between that range.

Input :  23   35
Output : 23  24  25  26  27  28  29  30  31  32  33  34  35

Input :  10   18
Output : 10  11  12  13  14  15  16  17  18

Input :  10   10
Output : 10

Input :  -10   2
Output : -10  -9  -8  -7  -6  -5  -4  -3  -2  -1  0  1  2

Input :  90   18
Output : Invalid range
*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf(" Area of circle is : %lf ",dRet);

    return EXIT_SUCCESS;
}