#include <stdio.h>
#include <math.h>

int main(){
    float weight , hight;
    scanf("%f %f" , &weight , &hight);
    float BMI = weight / pow(hight , 2);
    printf("Your BMI is %.2f\n" , BMI);
    if(BMI < 18.5){
        printf("You are underweight.");
    }else if(BMI >= 18.5 && BMI < 24.9){
        printf("You are normal weight.");
    }else if(BMI >= 25 && BMI < 29.9){
        printf("You are overweight.");
    }else{
        printf("You are obese.");
    }

    return 0;
}