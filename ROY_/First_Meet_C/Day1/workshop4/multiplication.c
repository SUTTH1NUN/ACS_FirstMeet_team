#include <stdio.h>

int main(){
    int n , a = 1;
    scanf("%d" , &n);
    while(a <= 12){
        printf("%d * %d = %d\n",n,a,a*n);
        a++;
    }
}