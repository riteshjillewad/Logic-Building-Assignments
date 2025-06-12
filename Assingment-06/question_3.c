/////////////////////////////////////////////////////////////////////////////////////
// Name: Factorial
// Description: Print the factorial of a number
// Input: int
// Output: int
// Date: 17-05-2025
// Author: Ritesh Jillewad
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("The factorial of number is: %d\n", iRet);

    return 0;
}
