#include <stdio.h>

int main(){

    int years;
    scanf("%d" , &years);
    if(years % 4 == 0 && years % 100 != 0){
        printf("%d is a leap year. February has 29 days.", years); 
    }else if (years % 400 == 0){
        printf("%d is a leap year. February has 29 days.", years); 
    }else{  
        printf("%d is not a leap year. February has 28 days." , years);
    }
    return 0;
}