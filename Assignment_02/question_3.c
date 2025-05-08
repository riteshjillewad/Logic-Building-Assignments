//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Display
// Description: To display Hello if number is < 10, otherwise Demo.
// Input: int
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
