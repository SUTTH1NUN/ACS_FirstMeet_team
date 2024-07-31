#include <stdio.h>
int i = 10;

int main(){
    while (1)
    {
        printf("%d " , i);
        i -=1;
        if(i == 0 ){
            break;
        }
    }
    
    return 0;
}