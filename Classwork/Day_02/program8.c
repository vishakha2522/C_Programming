/*
    Step 1: Understand the problem statement 
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/

////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//          User is going to enter any two intergers 
//          and we have to perform addition
//
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
//  Step 2: Write the algorithm
/*
  START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perform the additon and store into Ans
        Disply the result form Ans
    END
*/
///////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//  Step 3: Decide the programming language
//          We seect C programming
//////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
//  Step 4: Write the program
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name : Additon
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Performans additon
//  Date          : 04/10/2026
//  Author        : Vishakha Vikrant Shirke
//
/////////////////////////////////////////////////////////

int Additon(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // Business logic

    return iAns;
}

/////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0,iValue2 = 0, iResult = 0;

    printf("Enter first number: \n");
    scanf("%d", &iValue1);

    printf("Enter second number: \n");
    scanf("%d", &iValue2);

    iResult = Additon(iValue1, iValue2);      

    printf("Additon is : %d\n", iResult);
    
    return 0;
}
/////////////////////////////////////////////////////////
//  Step 5: Test the program
//
//  Tested test cases
//
//  Input1      Input2      Output
//---------------------------------------------
//   10           11          21
//   11           0           11
//   0            11          11
//   20           -9          11
//   -9           20          11
//   -20         -11         -31