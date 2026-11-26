/*
5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3     iCol = 4

Output : 1   2   3   4
         5   6   7   8
         9   10  11  12
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icol)
{ 
   int num = 1;
   for(int i = 1;i <= irow ;i++)
   {
    for(int j = 1;j <= icol;j++)
    {
          printf("%d\t",num);
          num++;
    } printf("\n");
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