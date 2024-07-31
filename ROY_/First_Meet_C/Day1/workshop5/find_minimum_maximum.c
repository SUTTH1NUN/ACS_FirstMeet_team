#include <stdio.h>

int main(){
    int a[10] , max , min;
    for(int i =0 ; i < 10; i++) {
        int n;
        scanf("%d",&n);
        a[i] = n;

    }
    max = min = a[0];
    for(int i =0 ; i < 10; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("Maximum number: %d\nMinimum number: %d", max , min);
}