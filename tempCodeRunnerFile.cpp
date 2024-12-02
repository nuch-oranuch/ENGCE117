for (int i = 0; i < *row; i++) // ชี้ไปที่ที่อยู่เพื่อเรียกใช้ค่า
        for (int j = 0; j < *col; j++)
            scanf("%d", &value[i * *col + j]); // เก็บค่า