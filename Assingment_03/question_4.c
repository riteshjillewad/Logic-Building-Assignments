//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: DisplayConvert
// Description: To convert character from lowercase to uppercase or vice-versa
// Input: char
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>  

void DisplayConvert(char CValue)
{
    if (islower(CValue))
    {
        printf("%c\n", toupper(CValue));
    }
    else if (isupper(CValue))
    {
        printf("%c\n", tolower(CValue));
    }
    else
    {
        printf("Not an alphabet character.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
