//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Display
// Description: To print the number line
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 14-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}