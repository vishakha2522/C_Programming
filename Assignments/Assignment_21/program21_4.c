/*
4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3  iCol = 4

Output :
*   #   *   #
*   #   *   #
*   #   *   #
*/


#include<stdio.h>
void Pattern(int irow,int icol)
{
  for(int i = 1;i <= irow ; i++)
  {
    for( int j = 1; j <= icol ; j++)
    {
        if(j % 2 != 0)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }printf("\n");
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