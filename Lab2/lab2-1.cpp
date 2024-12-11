#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]);

int main()
{
    char text[50] = "I Love You";
    char out[50];
    reverse(text, out);
    printf("%s", out);
    return 0;
} // end function

void reverse(char str1[], char str2[])
{
    int len1 = strlen(str1);
    for (int i = 0; i < len1; i++)
    {
        str2[len1 - 1 - i] = str1[i];
    } // end for

    str2[len1] = '\0';

} // end function
