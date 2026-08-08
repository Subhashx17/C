#include <stdio.h>


int main(){
    int arr[10] = {1,2,3,41,5,6,1};
    int n=7;
    int num=arr[0];
    int x;
    printf("Enter an element to add : ");
    scanf("%d",&x);
    
    arr[n]=x;
    n++;
    
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}

