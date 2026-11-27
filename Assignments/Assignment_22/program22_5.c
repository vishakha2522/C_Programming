/*
5. Accept number from user and display below pattern.

Input : 8

Output : 2   4   6   8   10   12   14   16
*/

#include<stdio.h>
void Pattern(int ino)
{
    for(int i = 2 ; i <= ino * 2 ; i = i + 2)
    {
            printf("%d\t",i);   
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