#include <stdio.h>

int main(){    
    int point;
    scanf("%d" , &point);
    if (point <= 50){
        printf( "Failed");
    }else{
        printf("Passed");
    }
    return 0;
}