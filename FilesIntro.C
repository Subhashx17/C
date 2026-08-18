#include<stdio.h>

int main(){
    // FILE *fptr;
    // fptr = fopen("Newtest.txt","w");
    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("test.txt","w");

    // char ch[100];
    // fscanf(fptr, "%[^\n]", ch);
    // printf("%s", ch);
    // fclose(fptr);

    char ch[]="Mango ";
    fprintf(fptr, "%s",ch);
    fclose(fptr);

    fptr = fopen("test.txt","a");
    char ch2[]="Thuppas Yedava";
    fprintf(fptr, "%s",ch2);
    fclose(fptr);
    return 0;
}