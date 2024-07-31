#include <stdio.h>

int main(){

    int choice = 0;
    float width = 0 , height = 0 , aws = 0;
    
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d" , &choice);
    if(choice == 1){
        printf("Enter the width: ");
        scanf("%f" , &width);
        printf("Enter the height: ");
        scanf("%f" , &height);
        aws = width*height;
        if(width >= 0 && height >= 0){
            printf("The area of the rectangle is: %.2f" , aws);
        }else{
            printf("The area of the rectangle is: Error");
        }
    }else if (choice == 2)
    {
        printf("Enter the base: ");
        scanf("%f" , &width);
        printf("Enter the height: ");
        scanf("%f" , &height);
        aws = 0.5*width*height;
        if(width >= 0 && height >= 0){
            printf("The area of the triangle is: %.2f" , aws);
        }else{
            printf("The area of the triangle is: Error");
        }
    }else if (choice == 3)
    {
        printf("Enter the radius: ");
        scanf("%f" , &width);
        aws = 3.14*(width*width);
        if(width >= 0){
            printf("The area of the circle is: %.2f" , aws);
        }else{
            printf("The area of the circle is: Error");
        }
    }else{
        printf("Invalid choice");
    }
    
    return 0;
}