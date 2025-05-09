//////////////////////////////////////////////////////////////////////////////////////////// 
// Name: ChkVowel
// Description: To chech whether a character is vowel or not
// Input: int
// Output: void
// Author: Ritesh Jillewad
// Date: 08-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cChar)
{
    if((cChar == 'a') || (cChar == 'e') || (cChar == 'i') || (cChar == 'o') || (cChar == 'u'),
       (cChar == 'A') || (cChar == 'E') || (cChar == 'I') || (cChar == 'O') || (cChar == 'U')
      )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character:\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}