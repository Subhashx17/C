#include<stdio.h>
void convert(char str[]);
int main(){
    char name[100];

    printf("enter your name : ");
    scanf("%s",name);
    convert(name);
    return 0;
}

void convert(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'){
            str[i]='A';
        }
        if(str[i]=='e'){
            str[i]='E';
        }
        if(str[i]=='i'){
            str[i]='I';
        }
        if(str[i]=='o'){
            str[i]='O';
        }
        if(str[i]=='u'){
            str[i]='U';
        }
    }
    puts(str);
}