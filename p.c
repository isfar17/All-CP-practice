#include<stdio.h>

int main()
{  

    int DIGIT;
    DIGIT=5;
    float  x=4.0;
    printf("%d\n",DIGIT);
    for ( int i = 0; i < 3; i++)
    {
        printf("%d",(i%2)?i:i+2);
    }
}