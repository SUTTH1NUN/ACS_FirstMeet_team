#include <stdio.h>

int main(){

    int student_point;
    scanf("%d" , &student_point);
    if(student_point >= 80){
        printf("Grade :A");
    }else if(student_point < 80 && student_point >= 75){
        printf("Grade :B+");
    }else if(student_point < 80 && student_point >= 75){
        printf("Grade :B+");
    }else if(student_point < 75 && student_point >= 70){
        printf("Grade :B");
    }else if(student_point < 70 && student_point >= 65){
        printf("Grade :C+");
    }else if(student_point < 65 && student_point >= 60){
        printf("Grade :C");
    }else if(student_point < 60 && student_point >= 55){
        printf("Grade :D+");
    }else if(student_point < 55 && student_point >= 50){
        printf("Grade :D");
    }else{
        printf("Grade :F");
    }

    return 0;

}