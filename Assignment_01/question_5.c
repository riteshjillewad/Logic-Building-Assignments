//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Accept
// Description: Accept a number and print * (accepts number times)
// Input: int
// Output: int (pattern)
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}