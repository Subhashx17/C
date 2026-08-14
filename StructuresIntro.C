#include<stdio.h>
#include<string.h>

struct student {
    int rollno;
    float cgpa;
    char name[100];
   };

int main(){
    struct student s1;
    s1.rollno = 7093;
    s1.cgpa = 9.8;
    strcpy(s1.name , "Subhash");

    printf("%s\n", s1.name);
    printf("%d\n", s1.rollno);
    printf("%f\n", s1.cgpa);    
   
    return 0;
}