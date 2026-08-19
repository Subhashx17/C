#include<stdio.h>

typedef struct FilesStructure{
        char name[50];
        int age;
        int marks;
        char course[100];
    }si;

int main(){
    FILE *fstructure;
    fstructure = fopen("FilesStructure.txt","w");
    
     
    struct FilesStructure student[5];
    for (int i=0 ; i<=5 ; i++){
        printf("Enter the details of the student : %d\n", i+1);

        printf("Student %d Name : ", i+1);
        scanf("%s", student[i].name);
        printf("Student %d age : ", i+1);
        scanf("%d", &student[i].age);
        printf("Student %d marks : ", i+1);
        scanf("%d", &student[i].marks);
        printf("Student %d course : ", i+1);
        scanf("%s", student[i].course);
        fprintf(fstructure, "%s , %d , %d , %s", student[i].name , student[i].age, student[i].marks, student[i].course);

    fclose(fstructure);
    };
    
    


    fclose(fstructure);
    return 0;
}