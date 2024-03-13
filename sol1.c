#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0; i<n;i++)
    {
        int x;
        scanf("%d",&x);
        arr[x]++;
    }
    int minimum=n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]<minimum)
        {
            minimum=arr[i];
            res=i;
        }
    }
    printf("%d",res);

    return 0;
}
