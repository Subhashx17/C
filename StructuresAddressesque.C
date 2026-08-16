#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseno;
    int blockno;
    char city[100];
    char state[100];
   };

void printinfo(struct address add);

int main(){
    struct address adds[5];
    printf("Enter address for person 1 : ");
    scanf("%d", &adds[0].houseno);
    scanf("%d", &adds[0].blockno);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
   
    printf("Enter address for person  2 : ");
    scanf("%d", &adds[1].houseno);
    scanf("%d", &adds[1].blockno);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter address for person 3  : ");
    scanf("%d", &adds[2].houseno);
    scanf("%d", &adds[2].blockno);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter address for person 4 : ");
    scanf("%d", &adds[3].houseno);
    scanf("%d", &adds[3].blockno);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter address for person 5 : ");
    scanf("%d", &adds[4].houseno);
    scanf("%d", &adds[4].blockno);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);
    

    printinfo(adds[0]);
    printinfo(adds[1]);
    printinfo(adds[2]);
    printinfo(adds[3]);
    printinfo(adds[4]);

    return 0;
}   



void printinfo(struct address add){
    printf("Address is : %d , %d , %s ,%s \n", add.houseno , add.blockno , add.city , add.state);
}