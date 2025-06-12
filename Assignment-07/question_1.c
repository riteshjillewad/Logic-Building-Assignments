//////////////////////////////////////////////////////////////////////////////
// Name: Display
// Description: Accept a number from user and display the pattern
// Input: int
// Output: void
// Date: 18-05-2025
// Author: Ritesh Jillewad
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (int i = 0; i < iNo; i++)
    {
        printf("*\t");
    }
    for (int i = 0; i < iNo; i++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
