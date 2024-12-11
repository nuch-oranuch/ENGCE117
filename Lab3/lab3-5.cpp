#include <stdio.h>

struct student
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    for (int i = 0; i < group; i++)
    {
        printf("Room %d: 10 students entered.\n", i + 1);
    } // end for
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] 
{
    static student child[ 20 ][ 10 ] ;
    
    printf("How many Room? : ");
    scanf("%d", room);

    for (int i = 0; i < *room; i++)
    {
        printf("Room %d\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("Student %d: ", j + 1);
            scanf("%s", child[i][j].name);
            printf("Age: ");
            scanf("%d", &child[i][j].age);
        } // end for
    } // end for
    
    return child;
} // end function