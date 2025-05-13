//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: FactRev
// Description: To display factors in decreasing order
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 13-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}