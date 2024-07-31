#include <stdio.h>
int main(){

    int a[10];
    for(int i =0 ; i < 10; i++) {
        int n;
        scanf("%d",&n);
        a[i] = n;
    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            int b = a[j];
            if(a[i] < a[j]){
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
    printf("Array after sorting :\n");
    for(int i =0 ; i < 10; i++) {
        printf("%d ",a[i]);
    }
}