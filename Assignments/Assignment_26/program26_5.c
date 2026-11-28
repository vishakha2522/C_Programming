/*
5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input :   A

Output :  Decimal       65
          Octal         0101
          Hexadecimal   0X41
*/

#include<stdio.h>
#include<stdlib.h>
void Display(char ch)
{
    char chi = '\0';

    printf("Decimal    %d\n",ch);
    printf("Hexadecimal %0X%x\n",ch);
    printf("Octal %04o\n",ch);

}
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}