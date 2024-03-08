#include<stdio.h>

int main()
{

    int  freq_arr[5][5]={{0},{0},{0},{0},{0}} , car;
    char city;
    printf("For each person enter the city code with car code\n");

    for (int i = 1; i < 100; i++)
    {
        scanf("%c",&city);
        if(city=='X')
        {
            break;
        }
        else{
            scanf("%d",&car);
        }
        switch (city)
        {
        case 'B':
             
            break;
        case 'C':
            freq_arr[2][car]++;
            break;
        case 'D':
            freq_arr[3][car]++;
            break;
        case 'M':
            freq_arr[4][car]++;
            break;

        default:
            break;
        }
    }
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
            {
            case 1:
                printf("Bombay");
                break;
            case 2:
                printf("Kolkata");
                break;
            case 3:
                printf("Delhi");
                break;
            case 4:
                printf("Madras");
                break;
            }
        for (int j = 1; j <= 4; i++)
        {
            printf("%7d",&freq_arr[i][j]);
        }
        printf("\n");
        
    }
    

    

    return 0;
}