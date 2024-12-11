#include <stdio.h>

int main()
{
    char fname[50], lname[50];
    printf("First Name: ");
    scanf("%s", &fname);
    printf("Last Name: ");
    scanf("%s", &lname);

    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand", fname, lname);

    return '0';
}