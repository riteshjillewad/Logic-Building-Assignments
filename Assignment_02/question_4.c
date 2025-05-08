//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Display
// Description: To accept two numbers from user and display first number in second number of times
// Input: int
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0; 

    for (i = 1; i <= iFrequency; i++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    printf("Enter Frequency:\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
