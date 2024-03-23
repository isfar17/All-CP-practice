#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int minimum=n-1,maximum=0;

    vector <int> arr(n,100);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=arr[minimum])
        {
            minimum=i;
        }
        if(arr[i]>arr[maximum])
        {
            maximum=i;
        }
    }
    if(minimum>maximum)
    {
        cout<<(maximum-1)+(n-minimum);
    }
    else if(maximum>minimum)
    {
        cout<<(n-minimum)+(maximum-1)-1;
    }
    


    
}