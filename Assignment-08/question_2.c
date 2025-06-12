///////////////////////////////////////////////////////////////////////////
// Name: RectArea
// Description: Calculate area of rectangle
// Input: float
// Output: float
// Date: 20-05-2025
// Author: Ritesh Jillewad
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = (fWidth * fHeight);
    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width of Rectangle:\n");
    scanf("%f", &fValue1);   

    printf("Enter Height of Rectangle:\n");
    scanf("%f", &fValue2);   

    dRet = RectArea(fValue1, fValue2);

    printf("The Area of Rectangle is: %f\n", dRet); 

    return 0;
}
