#include <stdio.h>
int main(){
    int a[10] , cnt = 1 , mode = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&a[i]);

    }
    mode = a[0];
    int b = cnt;
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(a[i] == a[j]) cnt++;
        }
        if(cnt >= b){
            if(mode > a[i]) mode = a[i];
            b = cnt ;
        }
        cnt = 1;
    }
    printf("Mode = %d",mode);
}