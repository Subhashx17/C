#include<stdio.h>

int main(){
    FILE *fhie;
    fhie = fopen(".txt","w");
    char ch[100];
    int age;
    float cgpa;
    printf("Enter your name : ");
    scanf("%s",ch);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your cgpa : ");
    scanf("%f",&cgpa);

   fprintf(fhie , "%s\n", ch);
   fprintf(fhie , "%d\n", age);
   fprintf(fhie , "%f\n", cgpa);

    fclose(fhie);
    return 0;
}