
#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( &aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

void upgrade( struct student *child ){
    float percent;
    if ((*child).gpa < 4.00 && (*child).gpa > 0.00)
    {
        if ((*child).sex == 'M')
            percent = ((*child).gpa * 10) / 100;
        // end if    
        else if ((*child).sex == 'F')
            percent = ((*child).gpa * 20) / 100;
        // end else if 
    } // end if
    printf("New GPA = %.2f\n", (*child).gpa + percent);
}
