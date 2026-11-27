/*
3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 5     iCol = 5

Output : $   *   *   *   *
         #   $   *   *   *
         #   #   $   *   *
         #   #   #   $   *
         #   #   #   #   $
*/

#include<stdio.h>
void Pattern(int irow,int icol)
{
   for(int i = 1 ;i <= irow ; i++)
   {
    for(int j = 1;j <= icol ; j++)
    {
        if(i > j)
        {
            printf("#\t");
        }
        else if(i < j)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
      }printf("\n");
   }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("enter number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);
    Pattern(ivalue1,ivalue2);
    return 0;
}