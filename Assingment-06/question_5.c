/////////////////////////////////////////////////////////////////////////////////////
// Name: Table
// Description: Print the table of a number in reverse order
// Input: int
// Output: int
// Date: 17-05-2025
// Author: Ritesh Jillewad
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}