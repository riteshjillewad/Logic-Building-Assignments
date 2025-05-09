//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: PrintEven
// Description: To print the number of evens that is accepted from the user
// Input: int
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}