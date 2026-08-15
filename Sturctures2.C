#include<stdio.h>
#include<string.h>

struct student {
    int rollno;
    float cgpa;
    char name[100];
   };

int main(){
    struct student ece[100];
    ece[0].rollno = 7093;
    ece[0].cgpa = 1.67;
    strcpy(ece[0].name , "Subhash");

    printf("Your name is  : %s \n",ece[0].name);
    printf("Roll number : %d \n", ece[0].rollno);
    printf("Your fucking cgpa is : %f \n", ece[0].cgpa);
        
   
    return 0;
}