/////////////////////////////////////////////////////////////////////////////////////
// Name: Table
// Description: Print the table of a number
// Input: int
// Output: int
// Date: 17-05-2025
// Author: Ritesh Jillewad
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}