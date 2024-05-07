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

    set <int> myset;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        myset.insert(x);
    }
    if(myset.size()==1)  cout<<"NO";
    else
    {
    auto ans=myset.begin();
    // advance(ans,1);
    cout<<*(++ans);
    }

    
 
}