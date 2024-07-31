#include <stdio.h>

int main(){
    int a[5], sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Sum of entered numbers: %d\n" , sum);
    printf("Numbers in array: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",a[i]);
    }

}