#include <stdio.h>

int main() {
    FILE *fptr = fopen("gfg.txt", "w+");
    fprintf(fptr, "GeeksForGeeks!");
    while (fgetc(fptr) != EOF);
    
    if(feof(fptr)){
        printf("EOF encounter \n");
    }
    
  	// Reset EOF using clearerr
    clearerr(fptr);
    if(!feof(fptr)){
        printf("Reset the EOF successfully");
    }
    
    fclose(fptr);
    return 0;
}