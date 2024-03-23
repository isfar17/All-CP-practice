#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,count=0,coin_count=0,sub_count=0;
    cin>>t;
    vector <int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        count+=arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=t-1;
    while (sub_count<=count && i>=0)
    {
        sub_count+=arr[i];
        count-=arr[i];
        coin_count++;
        i--;
    }
    cout<<coin_count<<endl;
    
    
}