/*
2. Accept number from user and display below pattern.

Input : 5

Output : 5   #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>
void Pattern(int irow)
{
   for(int i = irow ; i >= 1 ; i--)
   {
    printf("%d\t#\t",i);
   }  
}
int main()
{
    int ivalue1 = 0;

    printf("Enter number of elements\n");
    scanf("%d",&ivalue1);

    Pattern(ivalue1);
    return 0;
}