#include <stdio.h>


enum direction{
        East, West , North , South
    };

int main() {

    enum direction dir = North;
    printf("%d\n", dir);
    printf("%lu \n", sizeof(double));


    return 0;
}
