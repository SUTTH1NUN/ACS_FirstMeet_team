#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ") ;scanf("%d",&choice);
    if(choice == 1){
        float w , h;
        printf("Enter the width: ");scanf("%f",&w);
        printf("Enter the height: ");scanf("%f",&h);
        if(w >= 0 && h >= 0) printf("The area of the rectangle is: %.2f",w*h);
        else printf("The area of the rectangle is: Error");
    }
    else if(choice == 2){
        float base , height;
        printf("Enter the base: ");scanf("%f",&base);
        printf("Enter the height: ");scanf("%f",&height);
        if(base >= 0 && height >= 0) printf("The area of the triangle is: %.2f",0.5*base*height);
        else printf("The area of the triangle is: Error");
    }
    else if(choice == 3){
        float r;
        printf("Enter the radius: ");scanf("%f",&r);
        if(r >= 0) printf("The area of the circle is: %.2f", 3.14*(r*r));
        else printf("The area of the circle is: Error");
    }else printf("Invalid choice");
}