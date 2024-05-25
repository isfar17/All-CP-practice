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
        string s;
        cin>>s;
        int i=0,cut=1;
        while (i<=s.size()-1)
        {
            if(s[i]=='1')
            {   
                while ((i)<=s.size()-1)
                {
                    if(s[i]=='0')
                    {
                        cut+=1;
                        i-=1;
                        break;
                    }
                    i+=1;
                }
                
            }
            i+=1;
        }

        
    cout<<cut<<endl;
    }

}