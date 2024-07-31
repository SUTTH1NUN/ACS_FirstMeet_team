#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a >= 80) 
    {
       printf("Grade :A");
    }

    else if( 80 > a && a >= 75)
    {
       printf("Grade :B+");

    }
    else if( 75 > a && a >= 70)
    {
       printf("Grade :B");

    }
    else if( 70 > a && a >= 65)
    {
       printf("Grade :C+");

    }
    else if( 65 > a && a >= 60)
    {
       printf("Grade :C");

    }
    else if( 60 > a && a >= 55)
    {
       printf("Grade :D+");

    }
    else if(a>=50)
    {
       printf("Grade :D");

    }
     else if(a<50)
    {
       printf("Grade :F");

    }
   
   
    return 0;
}