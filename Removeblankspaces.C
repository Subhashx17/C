#include<stdio.h>
#include<string.h>

void remove(char str[]);

int main(){
    char name[100];
    
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    remove(name);
}

void remove(char str[]){
    char newstr[100];
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            
        }
        else{
            newstr[j]=str[i];
            j++;
        }
        i++;
    }
    newstr[j]='\0';
    puts(newstr);
}