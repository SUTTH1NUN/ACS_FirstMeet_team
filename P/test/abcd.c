#include <stdio.h>
int main(){
    int arr[3] = {},sum = 0; 
    scanf("%d %d %d %d ",&arr[0],&arr[1],&arr[2],&arr[3]);
    for (int  i = 0; i < 4; i++)
    {
        sum = sum+arr[i];
    }
    printf("%d",sum);
    

    return 0;
}