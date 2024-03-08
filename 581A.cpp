#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    cin>>a>>b; 

    if(a>b)
    {
        cout<<b<<" ";
        a-=b;
        cout<<a/2;

    }
    else
    {
        cout<<a<<" ";
        b-=a;
        cout<<b/2;
    }
}