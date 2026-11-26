/*
2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4     iCol = 4

Output : A   B   C   D
         a   b   c   d
         A   B   C   D
         a   b   c   d
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icol)
{
    for(int i = 1;i <= irow ;i++)
    {

        if(i % 2 == 0)
        {
            
          for(int k = 1,ch ='a';k <= icol; k++,ch++)
          {
            printf("%c\t",ch);
          }            
        }
        else 
        {

         for(int j = 1,ch ='A';j <= icol; j++,ch++)
         {
            printf("%c\t",ch);
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
    return EXIT_SUCCESS;
}