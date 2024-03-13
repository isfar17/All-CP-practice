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
        if(a+b==c || b+c==a || c+a ==b)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}