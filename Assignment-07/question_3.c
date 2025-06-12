//////////////////////////////////////////////////////////////////////////////
// Name: EvenFactorial
// Description: Find even factorials of given number.
// Input: int
// Output: int
// Date: 18-05-2025
// Author: Ritesh Jillewad
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{

    int iCnt = 0;
    int iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iResult = iResult * iCnt;
    }
    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial of %d is: %d\n", iValue, iRet);


    return 0;
}