#include <stdio.h>
 
int main()
{
    int i, j, a[20] = {0} , b[20] = {0}, k = 0, c = 1, max = 0, mode;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        mode = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] == b[i]) 
            c++;
        }
        if (c == 10)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode = ");
            for (i = 0; i < k; i++)
                printf("%d ",b[i]);
        }
        printf("\n");
        return 0;
    }