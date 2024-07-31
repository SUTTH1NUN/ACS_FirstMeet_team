#include <stdio.h>
int main(){
    int a[10],max,min;
    for (int i = 0; i < 10; i++)
    {
        int c;
        scanf("%d",&c);
        a[i] = c;
    }
    max=a[0];
    min =a[0];
    for (int i=0; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
        
    }
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d",min);
        return 0;
}