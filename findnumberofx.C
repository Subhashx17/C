#include <stdio.h>
 

int main(){
    int arr[8]= {1,2,3,2,1,2,2,3};

    int count=0;

    int x;
    printf("1 or 2 or 3 : ");
    scanf("%d", &x);

    
    for(int i=0 ; i<8 ; i++){
        
        if(arr[i]==x){
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}
