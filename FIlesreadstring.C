#include<stdio.h>

int main(){
    FILE *freadd;
    freadd = fopen("Filesreadstring.txt","r");
    char ch;
    ch = fgetc(freadd);
    
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(freadd);
    }
    printf("\n");
    fclose(freadd);

    return 0;
}