//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: Display
// Description: Used to print numbers from 5 to 1 using iterative approach.
// Input: void
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}
