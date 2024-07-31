#include <stdio.h>
#include <stdbool.h>
int main(){
    int a[10] = {50,30,80,10,40,90,20,70,60,100};
    int n;
    bool hello = true;
    scanf("%d",&n);
    for(int i = 0; i < 10; i++){
        if(a[i] == n){
            printf("Value %d found at index %d",n,i);
            hello = false;
           break; 
        }

    }
    if(hello){
        printf("Value %d not found in the array",n);
    }
}