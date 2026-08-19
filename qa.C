#include<stdio.h>

int main(){
    FILE *fqa;
    fqa =fopen("qa.txt","r");
    int count=0;
    char ch[100];
    fscanf(fqa,"%[^\n]", ch);

    fclose(fqa);

    for(int i=0; ch[i]!='\0' ; i++){
        if(ch[i] == 'a'|| ch[i] == 'e'|| ch[i] == 'i'|| ch[i] == 'o'|| ch[i] == 'u'){
            count++;
        }
    fqa = fopen("qa.txt","w");
    fprintf(fqa , "%d" , count);

    fclose(fqa);
    }


    

    return 0;
}