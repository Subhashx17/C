#include<stdio.h>

int main(){
    // FILE *fptr;
    // fptr = fopen("Newtest.txt","w");
    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch[100];
    fscanf(fptr, "%[^\n]", ch);
    printf("%s", ch);
    fclose(fptr);
    return 0;
}