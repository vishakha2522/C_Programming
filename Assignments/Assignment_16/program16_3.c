/*
3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3     iCol = 5

Output : A   A   A   A   A
         B   B   B   B   B
         C   C   C   C   C
*/

#include<stdio.h>

    void Pattern(int irow,int icol)
    {
      for(int i = 1,ch = 'A';i <= irow ;i++,ch++)
      {
        for(int j = 1;j <= icol;j++)
        {
            printf("%c\t",ch);
        }printf("\n");
      }printf("\n");
    }
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}