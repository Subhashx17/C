#include<stdio.h>
int SwapFunction(int *a, int *b);


int main(){
    int a = 2;
    int b = 4;

    SwapFunction(&a , &b);

    printf("%d", a);
    printf("%d", b);
    

    return 0;
}

int SwapFunction(int *a, int *b){
    int x;
    x = *a;
    *a = *b;
    *b = x;
    
}
