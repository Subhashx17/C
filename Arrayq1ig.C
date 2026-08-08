#include <stdio.h>

int rev(int arr[] , int n);
void printstat(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    rev(arr , 7);
    printstat(arr , 7);
    return 0;
}

int rev(int arr[], int n){
    for(int i=0 ; i<n/2 ; i++){
        int fv = arr[i];
        int sv = arr[n-i-1];
        arr[i] = sv;
        arr[n-i-1] = fv;
    }
}

void printstat(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}