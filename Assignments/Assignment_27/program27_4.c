/*
4. Write a program which accept string from user and check whether it contains vowels in it or not.

Input :   "marvellous"

Output :  TRUE

Input :   "Demo"

Output :  TRUE

Input :   "xyz"

Output :  FALSE
*/

#include<Stdio.h>
#include<stdlib.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL;
BOOL ChkVowel(char *str)
{
  while(*str != '\0')
  {
    if((*str =='A' || *str =='a') ||
       (*str =='E' || *str =='e') ||
       (*str =='I' || *str =='i') ||
       (*str =='O' || *str =='o') ||
       (*str =='U' || *str =='u'))
       {
        return TRUE;
       }str++;         
  } return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }
    return 0;
}