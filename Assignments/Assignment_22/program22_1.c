/*
1. Accept number from user and display below pattern.

Input : 5

Output : A   B   C   D   E
*/

#include<stdio.h>
void Pattern(int ino)
{
    char ch = '\0';
    for( ch ='A' ; ch < 'A' + ino ; ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number of elements \n");
    scanf("%d",&ivalue);

    Pattern(ivalue);
    return 0;   
}