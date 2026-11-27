/*
4. Accept number from user and display below pattern.

Input : 4

Output : #   1   *   #   2   *   #   3   *   #   4   *
*/


#include<stdio.h>
void Pattern(int ino)
{
    for(int i = 1 ; i <= ino ; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}
int main()
{
    int ivalue1 = 0;
    printf("Enter number of elements :\n");
    scanf("%d",&ivalue1);

    Pattern(ivalue1);
    return 0;
}