//////////////////////////////////////////////////////////////////////////////
// Name: DollarToINT
// Description: Accept amount in US dollar and return it's value in indian currency
// Input: int
// Output: int
// Date: 18-05-2025
// Author: Ritesh Jillewad
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    iNo = iNo * 70;
    return iNo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("The amount in INR is: %d\n",iRet);

    return 0;
}