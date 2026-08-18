#include<stdio.h>

int main(){
    FILE *fhie;
    fhie = fopen("integersque.txt","r");

    int a;
    fscanf(fhie, "%d", &a);
    printf("%d\n",a);
    fscanf(fhie, "%d", &a);
    printf("%d\n",a);
    fscanf(fhie, "%d", &a);
    printf("%d\n",a);
    fscanf(fhie, "%d", &a);
    printf("%d\n",a);
    fscanf(fhie, "%d", &a);
    printf("%d\n",a);
    
    

    fclose(fhie);
    return 0;
}