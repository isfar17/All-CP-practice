#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;

    if(t==1)
    {
        cout<<1<<endl;
    }
    else if(t==2 or t==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for (int i = 2; i <=t; i+=2) cout<<i<<" ";
        for (int i = 1; i <=t; i+=2) cout<<i<<" ";
        
    }
 
}