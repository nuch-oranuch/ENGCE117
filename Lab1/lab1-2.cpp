#include <stdio.h>
#include <string.h>

void GetSet(int data2[], int *num2); //แจ้งให้ทราบ

int main()
{
    int *data, num; //สร้างตัวแปร ชี้ไปที่ที่อยู่ของdata เพื่อดูค่าในอาเรย์และขนาดของอาเรย์คือ num
    //*data = &data, *num = &num
    //*data = ค่าตัวแรกในอาเรย์, data = ที่อยู่

    //input
    GetSet(data, &num); //ส่งที่อยู่ไปให้ฟังก์ชัน

    //output
    for (int i = 0; i < num; i++)
    {
    printf("%d ", data[i]);
    }

    return 0;
} // end function

void GetSet(int data2[], int *num2){ //ฟังก์ชันรับค่ามาเก็บไว้ในอาเรย์และสร้างที่อยู่เก็บค่าขนาดอาเรย์
    printf("Enter size: ");
    scanf("%d", num2); // รับขนาดของอาเรย์เก็บในที่อยู่ของnum2
    
    printf("Enter value %d: ");
    for (int i = 0; i < *num2; i++) //ชี้ไปที่ที่อยู่เพื่อเรียกใช้ค่า
        scanf("%d", &data2[i]); // เก็บค่าลงไว้ที่ที่อยู่อาเรย์ data2
}
