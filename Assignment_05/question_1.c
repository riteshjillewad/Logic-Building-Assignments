//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Pattern
// Description: To print $ and * on screen (number from input)
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 14-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" $ * ",iCnt);
    }
}

int main()
{
    int iValue;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}