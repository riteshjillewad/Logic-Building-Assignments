//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: MultFact
// Description: To print the multiplication of the factors of a number
// Input: int
// Output: int
// Author: Ritesh Jillewad
// Date: 13-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)             // This condition checks the factors of a number
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors: %d\n", iRet);

    return 0;
}
