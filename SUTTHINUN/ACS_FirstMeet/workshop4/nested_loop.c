#include <stdio.h>

int inp;

int main(){
    scanf("%d" , &inp);
    for(int i = 0; i < inp; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}