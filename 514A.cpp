#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    string t;
    cin>>t;
    if(t.size()==1)
    {
        cout<<t;
    }
    else
    {
    
    char first_index=t[0];
    int sz=t.size()-1;
    
    for (int i = 0; i <= sz; i++)
    {
        char a='9'-t[i]+'0';
        
        if(a<t[i])
        {
            t[i]=a;
        }
        
    }
    if(t[0]=='0')
    {
        t[0]=first_index;
    }
    cout<<t;

    }
    
}