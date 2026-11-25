/*
5. Write a program which accept total marks & obtained marks from user and calculate percentage.

Input :  1000  745
Output : 74.5%
*/

#include<stdio.h>
float Percentage(int obtainedmarks,int totalmarks)
{
    if(totalmarks == 0)
    {
        return 0;
    }
    else
    {
        return(obtainedmarks * 100.0 )/totalmarks;
    }
}
int main()
{
    int obtainedmarks = 0,totalmarks = 0;
    float fRet = 0.0;

    printf("Enter total marks \n");
    scanf("%d",&obtainedmarks);

    printf("Enter obtained marks\n");
    scanf("%d",&totalmarks);

    fRet = Percentage(obtainedmarks,totalmarks);
    printf("Calculated Percentage is %.1f%%",fRet);
    return 0;

}