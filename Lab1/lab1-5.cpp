#include <stdio.h>

void GetMatrix(int **value, int *row, int *col);

int main()
{
    int *data, m, n; // สร้างตัวแปร ชี้ไปที่ที่อยู่ของdata เพื่อดูค่าในอาเรย์และขนาดของอาเรย์คือ m(row) * n(col)

    // input
    GetMatrix(&data, &m, &n); // ส่งที่อยู่ไปให้ฟังก์ชัน

    // output
    printf("Matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", data[i * n + j]);
        printf("\n");
    }

    return 0;
} // end function

void GetMatrix(int **value, int *row, int *col)
{ // ฟังก์ชันรับค่ามาเก็บไว้ในอาเรย์และสร้างที่อยู่เก็บค่าขนาดอาเรย์
    printf("Enter the number of rows: ");
    scanf("%d", row); // รับขนาดแถว
    printf("Enter the number of columns: ");
    scanf("%d", col); // รับขนาดคอลัมน์

    *value = new int[*row * *col];

    printf("Enter the matrix elements: ");
    for (int i = 0; i < *row; i++) // ชี้ไปที่ที่อยู่เพื่อเรียกใช้ค่า
        for (int j = 0; j < *col; j++)
            scanf("%d", &(*value)[i * *col + j]); // เก็บค่า
}
