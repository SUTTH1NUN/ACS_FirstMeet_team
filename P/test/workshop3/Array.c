#include <stdio.h>
int main(){
    int a[5],i,sum =0;
    for ( i=0; i < 5;i++ ){
        int c;
        scanf("%d",&c);
        a[i] = c;
        sum = sum + c;
        
    }
    printf("Sum of entered numbers: %d\n",sum);
    printf("Numbers in array:");
    for ( i=0; i < 5;i++ ){
        printf(" %d",a[i]);
    }
    
        return 0;
}