/*
2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4     iCol = 4

Output : 2   4   6   8   10
         1   3   5   7   9
         2   4   6   8   10
         1   3   5   7   9

*/


#include<stdio.h>
void Pattern(int irow,int icol)
{
     for(int i = 1;i <= irow ; i++)
     {
        for(int j =1 ; j <= icol ;j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",j*2);
            }
            else
            {
                printf("%d\t", j * 2 - 1);
            }
        }
        printf("\n");
     }                                                                                                                                                                                                                                                                                   
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}