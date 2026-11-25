/*
4. Write a program which accept three numbers and print its multiplication.

Input :  5  4  7
Output : 140

Input :  5  0  7
Output : 35

Input :  5  0  0
Output : 5

Input :  0  0  0
Output : 0
*/

#include<stdio.h>

int Multiply(int ino1,int ino2,int ino3)
{
  if( ino2 == 0 && ino3 == 0)
  {
    return ino1;
  }
  
  else if( ino1 == 0 && ino2 == 0)
  {
    return ino3;
  }
  
  else if( ino3 == 0 && ino1 == 0)
  {
    return ino2;
  }
  if(ino1 == 0)
  {
    return ino2 * ino3;
  }
  else if (ino2 == 0)
  {
    return ino1 * ino3;
  }
  else if (ino3 == 0)
  {
    return ino2 * ino1;
  }
  
  else
  {
    return ino1 * ino2 * ino3;
  }
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0, iRet = 0;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&iValue1 ,&iValue2 ,&iValue3);
    iRet = Multiply(iValue1 ,iValue2,iValue3);
    printf("Multiplication is %d",iRet);
    return 0;
}