//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: SumNonFact
// Description: To return the summation of all it's non factors
// Input: int
// Output: int
// Author: Ritesh Jillewad
// Date: 13-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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
    int iRet = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of Factors is: %d",iRet);

    return 0;
}