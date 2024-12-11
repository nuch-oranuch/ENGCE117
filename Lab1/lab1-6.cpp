#include <stdio.h>
int *GetMatrix(int *row, int *col);
int main()
{
    int *data, m, n;
    data = GetMatrix(&m, &n);

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

int *GetMatrix(int *row, int *col)
{
    int *d;
    printf("Enter number of rows and columns:");
    scanf("%d %d", row, col);
    d = new int[*row * *col];
    printf("Enter the matrix elements: ");
    for (int i = 0; i < *row; i++) // ชี้ไปที่ที่อยู่เพื่อเรียกใช้ค่า
        for (int j = 0; j < *col; j++)
            scanf("%d", &d[i * *col + j]); // เก็บค่า
    return d;
}  // end function