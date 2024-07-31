#include <stdio.h>

int main(){

    int first_value = 0 , secorn_value = 1 , next;

    for(int i = 0; i<9; i++){
        if (i == 0){
            printf("%d %d " , first_value , secorn_value);
        }else{
        next = first_value + secorn_value;
        first_value = secorn_value;
        secorn_value = next;
        printf("%d " , next);
        }
   
    }

    return 0;
}