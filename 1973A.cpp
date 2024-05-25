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
        int a,b,c,count=0;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            cout<<0<<endl;
            continue;
        }
        else if(a==0 && b==0)
        {   
            cout<<-1<<endl;
            continue;
        }
        else if(a==0)
        {
            if(b==c)
            {
                count+=b;
                cout<<count<<endl;
                continue;
            }
            else
            {
                cout<<b<<endl;
                continue;
            }
        }
        else
        {   
            if(a==b && b==c)
            {
                cout<<-1<<endl;
                continue;
            }
            else if(a==b)
            {
                cout<<a+b<<endl;
                continue;
            }
            else if(b==c)
            {
                cout<<c+1<<endl;
                continue;
            }
            else if(a!=b && b!=c && c!=a)
            {
                cout<<a+b<<endl;
                continue;
            }
            
        }
    }
}