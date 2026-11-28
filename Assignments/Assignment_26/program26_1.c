/*
    1. Write a program which displays ASCII table. 
    Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
*/

#include<stdio.h>
#include<stdlib.h>
void DisplayASCII()
{
   int i;
   printf("Symbol \t Decimal \t Hexadecimal \t Octal \n");;
   for(i = 0; i <= 255 ; i++)
   {
    printf("%c \t %d \t %X \t %o \n",i,i,i,i);
   }
}
int main()
{
    DisplayASCII();
    return 0;
}