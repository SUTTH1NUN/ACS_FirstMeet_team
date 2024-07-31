#include <stdio.h>

int main(){
    float a , b;
    float c;
    scanf("%f %f" , &a , &b);
    c = a / (b*b);
    if(c >= 30) {
        printf("Your BMI is %.2f\n",c);
        printf("You are obese.");
    }else if(c >= 25){
        printf("Your BMI is %.2f\n",c);
        printf("You are overweigth.");
    }else if(c >= 18.5){
        printf("Your BMI is %.2f\n",c);
        printf("You are normal weight.");
    }else{
        printf("Your BMI is %.2f\n",c);
        printf("You are underweigth.");
    }
}