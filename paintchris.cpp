#include <bits/stdc++.h>
using namespace std;

int main() 
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;

    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        cout<<(z/2)/(x*y)<<"\n";

    }
    return 0;
}