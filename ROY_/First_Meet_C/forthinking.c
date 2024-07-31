#include <stdio.h>

int main(){
    int a[4], sum = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    for(int i = 0; i < 4; i++){
        printf("%d ",a[i]);
    }
    printf("\n%d",sum);
}