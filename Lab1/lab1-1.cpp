#include <stdio.h>

int main()
{
    int n ;
    printf("Enter number of line: ") ;
    scanf("%d", &n) ;
    for (int i = 0 ; i < n ; i++)
        printf("[%d] Hello world\n", i + 1) ;

    return 0;
} //end function
