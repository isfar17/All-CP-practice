#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    while (t--)
    {
        int x;
        cin>>x;

        long arr[x];
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);
        int count=0;
        for (int i = 1; i < x; i++)
        {
            count+=arr[i]-arr[i-1];
        }
        cout<<count<<endl;

            
    }


    
    
    
}