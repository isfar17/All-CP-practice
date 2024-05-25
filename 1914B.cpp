#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,last=1;
        cin>>n>>k;
        if(k>0)
            cout<<1<<" ";
        for (int i = 2; i <=n; i++)
        {
            if(k<=1)
                break;
            cout<<i<<" ";
            last=i;
            k--;
        }
        
        for (int i = n; i >last; i--)
        {
            cout<<i<<" ";
        }
        if(k==0)
            cout<<1<<" ";
        
        cout<<endl;

        
    }

}