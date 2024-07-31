#include <stdio.h>
int inp , arr[] , sum;

int main(){
    for(int i = 0 ; i<5; i++){
        scanf("%d" , &inp);
        arr[i] = inp;
        sum += inp;
    }
    printf("Sum of entered numbers: %d\n" , sum);
    printf("Numbers in array: ");
    for(int j = 0 ; j<5 ; j++){
        printf("%d " , arr[j]);
    }
    return 0;
}