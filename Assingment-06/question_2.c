/////////////////////////////////////////////////////////////////////////////////////
// Name: Display
// Description: Print the number in word format
// Input: int
// Output: void 
// Date: 16-05-2025
// Author: Ritesh Jillewad
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero\n");
    }
    else if(iNo == 1)
    {
        printf("One\n");
    }
        else if(iNo == 2)
    {
        printf("Two\n");
    }
        else if(iNo == 3)
    {
        printf("Three\n");
    }
        else if(iNo == 4)
    {
        printf("Four\n");
    }
        else if(iNo == 5)
    {
        printf("Five\n");
    }
        else if(iNo == 6)
    {
        printf("Six\n");
    }
        else if(iNo == 7)
    {
        printf("Seven\n");
    }
        else if(iNo == 8)
    {
        printf("Eight\n");
    }
        else if(iNo == 9)
    {
        printf("Nine\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    if(iValue > 9)
    {
        printf("Invalid Number\n");
    }

    Display(iValue);

    return 0;
}