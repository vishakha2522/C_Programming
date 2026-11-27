/*
5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4     iCol = 4

Output : 1   2   3   4   5
         1   2           5
         1       3       5
         1           4   5
         1   2   3   4   5
*/

#include<stdio.h>
void Pattern(int irow,int icol)
{
  for(int i = 1;i <= irow ;i++)
  {
    for(int j = 1; j <= icol ; j++)
    {
        if(i == 1 || i == irow || j == 1 ||  j == icol || i == j)
        {
            printf("%d\t",j);
        }
        else
        {
            printf("\t");
        }
    }printf("\n\n");
  }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter number of rows and columns \n");
    scanf("%d %d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}