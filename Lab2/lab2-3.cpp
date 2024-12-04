#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main()
{
    char out[20][10];
    int num;
    explode("I/Love/You", '/', out, &num);
    return 0;
} // end function

void explode(char str1[], char splitter, char str2[][10], int *count){
    int len1 = strlen(str1);

    int n = 0;
    int x = 0;

    for (int i = 0; i < len1; i++)
    {
        if ( str1[i] == splitter)
        {
            str2[*count][n] = '\0';
            n = 0;
            x++;
            (*count)++ ;
            continue;
        }

        str2[*count][n] = str1[i];
        n++;
    }
    *count = x + 1;

    for (int i = 0; i < *count; i++)
    {
        printf("str2[%d] = %s\n", i, str2[i]);
    }    
    printf("count = %d", *count);
}
