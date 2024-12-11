#include <stdio.h>
#include <string.h>

void GetSet(int data2[], int *num2);

int main()
{
    int *data, num;

    GetSet(data, &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", data[i]);
    } //end for

    return 0;
} // end function

void GetSet(int data2[], int *num2)
{
    printf("Enter size: ");
    scanf("%d", num2);

    printf("Enter value: ");
    for (int i = 0; i < *num2; i++)
        scanf("%d", &data2[i]);
} //end function
