//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: MultipleDisplay
// Description: To print first 5 multiples of N
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 14-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMultiple = iNo * iCnt;
        printf("%d ",iMultiple);
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}