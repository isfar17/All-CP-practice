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
        string new_string="";
        for (int i = 0; i < s.size();i+=2)
        {
            if(s[i]!=new_string[new_string.size()-1] )
            {
                new_string+=s[i];
                new_string+=s[i+1];
            }
            else if(s[i]==new_string[new_string.size()-1])
            {
                new_string+=s[i+1];
            }
        }
        cout<<new_string<<endl;
    }

}