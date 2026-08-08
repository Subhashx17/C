#include <stdio.h>


int main(){
    int arr[] = {1,2,3,41,5,6,1};
    int n=1;
    int num=arr[0];
    

    for(int i=0; i<n ; i++){
       if (num<arr[i]){
        num = arr[i];
       }
    }
    printf("The maximum number is : %d",num);
    return 0;
}

