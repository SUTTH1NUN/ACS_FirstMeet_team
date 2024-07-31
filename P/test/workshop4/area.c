#include <stdio.h>
int main(){
    int choice;
    printf("1. Rectangle\n2. Triangle\n 3. cicle\n");
    printf("Enter your choice: "); scanf("%d",&choice);
    if ( choice == 1)
    {
        float w,h;
        printf("Enter the width: ");scanf("%f",&w); 
        printf("Enter the height: ");scanf("%f",&h);
        if (w >=0 && h >=0)
        {
            printf("The area of the rectangle is: %.2f",w*h);
        }
        else{
            printf("The area of the rectangle is: Error");
        }
    }
    else if ( choice == 2)
    {
        float b,h;
        printf("Enter the base: ");scanf("%f",&b);
        printf("Enter the height: ");scanf("%f",&h);
        if (b >=0 && h >=0)
        {
            printf("The area of the triangle is: %.2f",0.50*b*h);
        }
        else{
            printf("The area of the rectangle is: Error");
        }
    }
    else if ( choice == 3)
    {
        float r; 
        printf("Enter the radius: ");scanf("%f",&r);
        if(r >= 0)
        {
           
            printf("The area of the circle is: %.2f",3.14*r*r);
            
        }
        else{
            printf("The area of the rectangle is: Error");
        }
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}