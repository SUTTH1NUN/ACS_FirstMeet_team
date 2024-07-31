#include <stdio.h>

int main(){

    int arr[9] , a = 0;
    for(int i = 0 ; i < 9 ; i++){
        scanf("%d" , &a);
        arr[i] = a;
    }
    int max = arr[0];
    for(int j = 0 ; j  < 9 ; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }
    printf("The maximum value in the matrix is: %d" , max);

    return 0;
}