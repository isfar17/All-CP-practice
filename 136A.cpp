#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    int arr[t];
    int result[t];

    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < t; i++)
    {
        result[arr[i]-1]=i+1;
    }

    for (int i = 0; i < t; i++)
    {
        cout<<result[i]<<" ";
    }    
    return 0;
}