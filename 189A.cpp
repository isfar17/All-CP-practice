#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int count=0;
    if((a)==n)
    {
        count=1;
    }   
    if((b)==n)
    {
        count=1;
    }    
    if((c)==n)
    {
        count=1;
    }
    if((a+b)==n)
    {
        count=2;
    }
    if((b+c)==n)
    {
        count=2;
    }
    if((c+a)==n)
    {
        count=2;
    }
    if((b+c+a)==n)
    {
        count=3;
    }
    cout<<count;
}