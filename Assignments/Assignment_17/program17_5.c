/*
5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4     iCol = 4

Output : 1   2   3   4
         2   3   4   5
         3   4   5   6
         4   5   6   7
*/

#include<stdio.h>
void Pattern(int irow,int icol)
{
   for(int i = 1 ; i <= irow ; i++)
   {
    for(int j = i; j <= i + 4 ;j++)
    {
        printf("%d\t",j);
    }
    printf("\n");
   }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("Enter number of rows and columns \n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}