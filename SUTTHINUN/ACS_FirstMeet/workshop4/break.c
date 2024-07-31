#include <stdio.h>
int input_num , sum;

int main(){

    for(int i = 0; i<10; i++){
    scanf("%d" , &input_num);
    if(input_num <= 0){
        sum += input_num;
        break;
    }else{
    sum += input_num;
    }
    }
    printf("%d" , sum);
    return 0;
}