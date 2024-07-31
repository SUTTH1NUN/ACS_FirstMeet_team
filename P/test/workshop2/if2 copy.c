#include <stdio.h>
int main(){
    float w,b , bmi;
    scanf("%f %f",&w &b);
    bmi = w / (b*b);
    if (bmi <= 18.5)
    {
        printf("Your BMI is 17.58 You are underweight.");
    }
    
   
    return 0;
}