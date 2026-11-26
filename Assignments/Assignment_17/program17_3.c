/*
3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 5     iCol = 5

Output : a   b   c   d   e
         1   2   3   4   5
         a   b   c   d   e
         1   2   3   4   5
         a   b   c   d   e
*/

#include<stdio.h>
void Pattern(int irow,int icol)
{
     char ch = '\0';
     for(int i = 1;i <= irow ; i++)
     {
        for(int j = 1,ch ='a'; j <= icol ;j++,ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t", j);
            }
        }printf("\n");
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}