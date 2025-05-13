//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: NonFact
// Description: To display non factors of a number
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 13-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)           // condition for non factors of number
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

    NonFact(iValue);

    return 0;
}