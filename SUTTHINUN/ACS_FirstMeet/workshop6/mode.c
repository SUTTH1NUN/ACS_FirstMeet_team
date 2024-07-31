#include <stdio.h>

int main(){

    int arr[10] , a, mode = 0 , max , maxv;

    for(int i = 0 ; i < 10 ; i++){
        scanf("%d" , &a);
        arr[i] = a;
    }
    for(int j = 0 ; j < 10 ; j++){
        for(int k = j+1 ; k < 10 ; k++){
            if(arr[j] == arr[k]){
                mode += 1;
            }
        }
        if(mode > max){
            max = mode;
            maxv = arr[j];
        }
    }
    printf("Mode = %d" , maxv);
    return 0;
}
