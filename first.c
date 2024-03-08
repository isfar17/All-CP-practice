#include<stdio.h>

int main()
{
    char ch = 'k';
    printf("Hello World\n");
    int x=45;
    float var=3.5;
    printf("%d \n",x);
    printf("%.2f \n",var);
    printf("%c \n",ch);
    if (ch>='a' && ch<='z')
    {
        printf("%c is a lowercase alphabet",ch);
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d \n",i);
    }
       
    return 0;
}
