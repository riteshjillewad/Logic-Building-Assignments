//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: OddDisplay
// Description: To print all the odd numbers upto N
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 14-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}