#include<stdio.h>

int main(){
    FILE *fhello;
    fhello = fopen("FilesOddNumbers.txt","w");
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ;i=i+2){
        fprintf(fhello , "%d    ", i);
    }
    
    fclose(fhello);

    return 0;
}