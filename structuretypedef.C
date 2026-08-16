#include<stdio.h>
#include<string.h>

typedef struct student {
    int rollno;
    float cgpa;
    char name[100];
   } stu;

int main(){
    struct student s1 = {7093 , 1.4 , "Subahsh"};
    printf("student roll no : %d \n ",s1.rollno);
    printf("student cgpa : %f \n ",s1.cgpa);
    printf("student Name : %s \n ",s1.name);
   

    struct student *ptr = &s1;
    printf("student roll no : %d \n ", (*ptr).rollno);
    return 0;
}