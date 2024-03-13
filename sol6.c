#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define max( a, b ) ( ( a > b) ? a : b )

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=1;
    int maximum=0;
    int i_index=0,j_index=0,current_i=0;

    while (current_i<n)
    {
        if(arr[current_i]-1==arr[current_i-1])
        {   
            count++;
            maximum=max(maximum,count);
        }
        else{
            count=1;
        }
        current_i++;
    }
    printf("%d",maximum);
    

}