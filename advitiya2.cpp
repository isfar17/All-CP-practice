#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {
        int arr[5];
        int count=0;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
            if (arr[i]==1)
            {
                count++;
            }
        }
        if(count>=4)
        {
            cout<<"YES\n";
        }        
        else
        {
            cout<<"NO\n";
        }        
        
    }
    
}