#include <stdio.h>

int main(){
    int current = 0 , next = 1 , sum , i = 8;
    printf("%d %d " ,current , next);
    while (i--){
        sum = current + next;
        printf("%d " , sum);
        current = next;
        next = sum;
    }
}