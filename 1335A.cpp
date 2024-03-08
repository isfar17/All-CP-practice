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
        if(x%2==0)
        {
            cout<<x/2-1<<"\n";
        }
        else
        {
            cout<<x/2<<"\n";
        }
    }
    
}