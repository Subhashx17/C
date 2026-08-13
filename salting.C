#include <stdio.h>
#include <string.h>

void salting(char pass[]);

int main(){
    char passworddd[1000];
    scanf("%s", passworddd);
    salting(passworddd);
    return 0;
}

void salting(char pass[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass , pass);
    strcat(newPass , salt);
    puts(newPass);
}