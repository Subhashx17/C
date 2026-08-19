#include <stdio.h>

typedef struct FilesStructure {
    char name[50];
    int age;
    int marks;
    char course[100];
} si;

int main() {

    FILE *fstructure;
    fstructure = fopen("FilesStructure.txt", "w");

    si Student[5];

    fprintf(fstructure, "============================================================\n");
    fprintf(fstructure, "%-15s %-10s %-10s %-15s\n",
            "Name", "Age", "Marks", "Course");
    fprintf(fstructure, "============================================================\n");

    for (int i = 0; i < 5; i++) {

        printf("\nEnter the details of student %d\n", i + 1);

        printf("Student %d Name : ", i + 1);
        scanf("%49s", Student[i].name);

        printf("Student %d Age : ", i + 1);
        scanf("%d", &Student[i].age);

        printf("Student %d Marks : ", i + 1);
        scanf("%d", &Student[i].marks);

        printf("Student %d Course : ", i + 1);
        scanf("%99s", Student[i].course);

        // Write this student's details into the file
        fprintf(fstructure, "%-15s %-10d %-10d %-15s\n",
                Student[i].name,
                Student[i].age,
                Student[i].marks,
                Student[i].course);
    }

    fprintf(fstructure, "============================================================\n");

    fclose(fstructure);

    return 0;
}