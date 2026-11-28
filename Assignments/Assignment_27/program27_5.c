/*
5. Write a program which accept string from user and display it in reverse order.

Input :   "MarvellouS"

Output :  "SuollevraM"
*/

#include<stdio.h>
#include<stdlib.h>
void Reverse(char *str)
{
    int i = 0, j = 0 ;
    char temp;

    while(str[j] != '\0')
    {
        j++;
    }
    j--;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s",str);

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}