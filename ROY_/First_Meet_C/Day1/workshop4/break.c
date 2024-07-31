#include <stdio.h>

int main(){
    int n , sum = 0 , i = 9; 
    scanf("%d" , &n);
    sum += n;
    while(i--){
        if(n > 0){
            scanf("%d",&n);
            sum += n;
        }else break;
    }
    printf("%d",sum);
}