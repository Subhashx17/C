#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){
    FILE *fp;

    fp = fopen("gtggg.txt", "r");

    if(fp == NULL){
        printf("Error Code %d \n", errno);
        perror("Error");
        printf("The error is : %s \n", strerror(errno));
    }
    return 0;
}