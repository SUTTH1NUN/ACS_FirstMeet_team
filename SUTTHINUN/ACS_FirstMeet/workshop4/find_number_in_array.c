#include <stdio.h>

int main(){

    int arr[] = {50, 30, 80, 10, 40, 90, 20, 70, 60, 100};
    int a = 0, found = 0;
    
    scanf("%d" , &a);
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] == a){
            printf("Value %d found at index %d" , a , arr[i]);
            found = 1 ;
            break;
        }
    }
    if(found == 0){
        printf("Value %d not found in the array" , a);
    }
    return 0;
}