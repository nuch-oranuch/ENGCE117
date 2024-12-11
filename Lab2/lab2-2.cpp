#include <stdio.h>
#include <string.h>

char* reverse(char str1[]);
int main()
{
    char text[50] = "I Love You";
    char *out;
    out = reverse(text);
    printf("%s", out);
} // end function

char* reverse(char str1[]){
    int len1 = strlen(str1);
    char *str2;
    str2 = new char[len1];
    for (int i = 0; i < len1; i++)
    {
        str2[len1 - 1 - i] = str1[i];
    } // end for

    str2[len1] = '\0';

    return str2;
} // end function
