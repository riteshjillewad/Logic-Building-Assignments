///////////////////////////////////////////////////////////////////////////
// Name: KMtoMeter
// Description: Accept kilometer and convert it into meter
// Input: int
// Output: int
// Date: 20-05-2025
// Author: Ritesh Jillewad
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define INVALID_KM -1

int KMtoMeter(int iNo)
{

    if(iNo < 0)
    {
        return INVALID_KM;
    }

    iNo = (iNo * 1000);
    return iNo;
}

int main()
{
    int iKm = 0;
    int iRet = 0;

    printf("Enter Kilometers:\n");
    scanf("%d", &iKm);

    iRet = KMtoMeter(iKm);

    if(iRet == INVALID_KM)
    {
        printf("Error: Distance cannot be negative.\n");
    }
    else
    {
        printf("%d Kilometers is %d Meters\n", iKm, iRet);
    }

    return 0;
}