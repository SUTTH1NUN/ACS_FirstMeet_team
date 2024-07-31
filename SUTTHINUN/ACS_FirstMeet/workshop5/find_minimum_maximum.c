#include <stdio.h>

int max = -10e9 , min = 10e9 , inp , arr[9];

int main(){

    for(int i = 0 ; i<10 ; i++){
        scanf("%d" , &inp);
        arr[i] = inp;
    }
    for(int j = 0 ; j<10 ; j++){
        if(arr[j] > max){
            max = arr[j];
        }
        if(arr[j] < min){
            min = arr[j];
        }
    }
    printf("Maximum number: %d\n" , max);
    printf("Minimum number: %d" , min);

    return 0;
}