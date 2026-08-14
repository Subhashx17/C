#include<stdio.h>
void convert(char str[]);
int main(){
    char name[100];

    printf("enter your name : ");
    scanf("%[^\n]",name);
    convert(name);
    return 0;
}

void convert(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
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

    else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            if(str[i]=='A'){
            str[i]='a';
        }
        if(str[i]=='E'){
            str[i]='e';
        }
        if(str[i]=='I'){
            str[i]='i';
        }
        if(str[i]=='O'){
            str[i]='o';
        }
        if(str[i]=='U'){
            str[i]='u';
        }
        }
        
    }
    puts(str);
}