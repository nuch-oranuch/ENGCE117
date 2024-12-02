#include <stdio.h>
int *GetSet(int *num2);

int main()
{
    int *data, num;
    data = GetSet(&num);

    printf("Number of elements: %d\n", num);
    for (int i = 0; i < num; i++)
        printf("%d ", data[i]);

    return 0;
} // end function

int *GetSet(int *num2)
{
    int arr_num2;
    printf("Enter the number of elements: ");
    scanf("%d", &arr_num2);         // รับขนาดของอาเรย์เก็บในที่อยู่ของarr_num2
    
    int *data2 = new int[arr_num2]; // สร้างเพื่อเอาไว้เก็บค่าลงในอาเรย์มีขนาดเท่ากับผู้ใช้กรอก

    printf("Enter the elements: ");
    for (int i = 0; i < arr_num2; i++)
        scanf("%d", &data2[i]); // เก็บค่าลงไว้ที่ที่อยู่อาเรย์ data2
    *num2 = arr_num2;
    return data2;
}
