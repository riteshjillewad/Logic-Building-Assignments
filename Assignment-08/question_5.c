///////////////////////////////////////////////////////////////////////////
// Name: SquareMeter
// Description: Accept area in square feet and convert it to square meter
// Input: double
// Output: double
// Date: 20-05-2025
// Author: Ritesh Jillewad
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define INVALID_INPUT -1

double SquareMeter(double dArea)
{
    if(dArea < 0)
    {
        return INVALID_INPUT;
    }

    return dArea * 0.0929;
}

int main()
{
    double dValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet:\n");
    scanf("%lf", &dValue);

    dRet = SquareMeter(dValue);

    if(dRet == INVALID_INPUT)
    {
        printf("Area cannot be negative.\n");
    }
    else
    {
        printf("%.2lf Square Feet is %.2lf Square Meters\n", dValue, dRet);
    }

    return 0;
}
