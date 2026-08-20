#include <stdio.h>


union Student{
        int rollno;
        int age;
    };

int main() {
    union Student data;

    data.rollno = 12;
    printf("%d\n",data.rollno);

    data.age = 213;
    printf("%d\n",data.age);
    printf("%d\n",data.rollno);


    

    

    return 0;
}
