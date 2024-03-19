#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    vector<int> arr(t+1,-1);
    arr[0]=0;
    arr[1]=1;

    for (int i = 2; i <=t; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];

    }
    cout<<arr[t];
    


}