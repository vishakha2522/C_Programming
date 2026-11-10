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

int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult = iValue1 + iValue2;      // Business logic

    printf("%d\n", iResult);
    
    return 0;
}