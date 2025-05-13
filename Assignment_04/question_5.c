//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: FactDiff
// Description: To return the difference between summation of all it's factors and non factors
// Input: int
// Output: int
// Author: Ritesh Jillewad
// Date: 13-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}


int SumNonFact(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int iDiff = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iFactSum = SumFact(iValue);
    printf("Summation of Factors is: %d\n",iFactSum);

    iNonFactSum = SumNonFact(iValue);
    printf("Summation of Non Factors is: %d\n",iNonFactSum);

    iDiff = (iFactSum - iNonFactSum);

    printf("The Difference between Summation of it's Factors and Non Factors is: %d\n",iDiff);

    return 0;
}