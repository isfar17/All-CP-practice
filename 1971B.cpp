#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    // file()
    int t;
    cin>>t;

    while(t--)
    {
        string s,r;
        cin>>s;
        if(s.size()==1)
            {
                cout<<"NO"<<endl;
                continue;
            }
        r=s;
        int i=1;
        while (r==s && i<s.size())
        {
            char t=r[0];
            r[0]=r[i];
            r[i]=t;
            i+=1;
        }
        if(r==s)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<r<<endl;
        }
        
    }

}