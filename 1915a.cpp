#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int a,b,c;

        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<'\n';
        }
        else if(a==c)
        {
            cout<<b<<'\n';
        }
        else
        {
            cout<<a<<'\n';
        }
    }
    return 0;
}