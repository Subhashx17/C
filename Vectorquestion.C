#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct vector {
    int x1,y1;
    int x2,y2;
   } vec;

void addingfn(struct vector v1);

int main(){
    struct vector v1[2];
    printf("Enter x1 , y1 : ");
    scanf("%d", &v1[0].x1);
    scanf("%d", &v1[0].y1);

    printf("Enter x2 , y2 : ");
    scanf("%d", &v1[1].x2);
    scanf("%d", &v1[1].y2);

    int x;
    int y;
    x = v1[0].x1 - v1[1].x2;
    y = v1[0].y1 - v1[1].y2;

    int resultantsqr;
    resultantsqr = (x*x)+(y*y);

    float res;
    res = sqrt(resultantsqr);

    printf("resultant vector's magnitude is : %f", res);


    return 0;
}
