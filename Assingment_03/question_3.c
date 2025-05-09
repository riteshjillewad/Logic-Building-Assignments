//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: DisplayEvenFactor
// Description: To print even factors of number accepted from the user
// Input: int
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0)) 
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    
    return 0;
}
