///////////////////////////////////////////////////////////////////////////
// Name: FhtoCs
// Description: Accept temp in fahrenheit and convert to celsius
// Input: float
// Output: double
// Date: 20-05-2025
// Author: Ritesh Jillewad
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    fTemp = (fTemp - 32) * (5.0f / 9.0f);
    return fTemp;
}

int main()
{
    float fFah = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f",&fFah);

    dRet = FhtoCs(fFah);
    printf("Temperature in Celcius is:%f",dRet);
}