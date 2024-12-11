#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main()
{
    char out[20][10];
    int n;
    explode("I/Love/You", '/', out, &n);
    for (int i = 0; i < n; i++)
        printf("str2[%d] = %s \n", i, out[i]);
    printf("count = %d", n);
    return 0;
} // end function

void explode(char str1[], char splitter, char str2[][10], int *count)
{
    int len = strlen(str1);
    int numtxt = 0;
    int txt = 0;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == splitter)
        {
            if (i == (len - 1) || str1[i + 1] == splitter || txt == 0)
            {
                continue;
            } // end if
            str2[numtxt][txt] = '\0';
            txt = 0;
            numtxt++;
            continue;
        } // end if
        str2[numtxt][txt] = str1[i];
        txt++;
    } // end for
    *count = txt;
}