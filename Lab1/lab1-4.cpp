#include <stdio.h>

int GetSet(int data2[]);

int main()
{
    int *data, num;
    data = new int[0]; //ให้*dataเป็นอาเรย์
    num = GetSet(data); //รับค่าnumจากฟังก์ชัน

    printf("Number of elements: %d\n", num);
    for (int i = 0; i < num; i++)
        printf("%d ", data[i]);
    return 0;
} // end function

int GetSet(int data2[]){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num); // รับขนาดของอาเรย์เก็บในที่อยู่ของ num

    printf("Enter the elements: ");
    for (int i = 0; i < num; i++)
        scanf("%d", &data2[i]); // เก็บค่าลงไว้ที่ที่อยู่อาเรย์ data2

    return num; //ส่งค่าnumกลับ
}