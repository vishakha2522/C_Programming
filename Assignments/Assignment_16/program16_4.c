/*
4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4     iCol = 5

Output : 4   4   4   4   4
         3   3   3   3   3
         2   2   2   2   2
         1   1   1   1   1
*/

#include<stdio.h>
void Pattern(int irow,int icol)
{
   for(int i = irow;i >= 1;i--)
   {
    for(int j = 1;j <= icol;j++)
    {
        printf("%d\t",i);
    }printf("\n");
   }printf("\n");
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}