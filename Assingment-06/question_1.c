/////////////////////////////////////////////////////////////////////////////////////
// Name: Number
// Description: Print specific condition
// Input: int
// Output: void 
// Date: 15-05-2025
// Author: Ritesh Jillewad
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}