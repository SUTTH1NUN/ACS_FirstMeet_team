#include <stdio.h>
int main (){
    int  i = 10;
    while ( i <= 10)
    {
        if (i < 1)
        {
          break;  
        }
         printf("%d ",i);
         i--;
    }
return 0;
}