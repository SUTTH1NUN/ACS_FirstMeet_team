#include <stdio.h>
int inp , arr[10], swap;

int main(){
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d" , &inp);
        arr[i] = inp;
    }
    for(int j = 0 ; j < 10 ; j++){
        for(int k = j + 1 ; k < 10 ; k++){
            if(arr[j] < arr[k]){
                swap = arr[k];
                arr[k] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for(int m = 0 ; m < 10 ; m++){
        printf("%d " , arr[m]);
    }
    return 0;
}

