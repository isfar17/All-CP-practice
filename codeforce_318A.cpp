#include <bits/stdc++.h>
using namespace std;

int main() 
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long n,k,half,x;
    cin>>n>>k;

    if (n%2==0)
    {
        half=n/2;
    }
    else
    {
        half=n/2+1;
    }

    long long arr[n];

    x=0;
    if (k<=half)
    {
    for (long long i = 1; i <= n; i+=2)
    {
 
        arr[x]=i;
        x++;
    }

    }
    else{

    x=half;
    for (long long i = 2; i <= n; i+=2)
    {

        arr[x]=i;
        x++;
    }
    }
        
    
    cout<<arr[k-1] ;
    
    return 0;
}