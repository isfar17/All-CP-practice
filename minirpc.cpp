#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;

        string s;
        cin>>s;

        string seq[n];

        for (int i = 0; i <=s.length()-1; i++)
        {
            if (s[i]=='R')
            {
                seq[i]+='P';
            }
            else if (s[i]=='P')
            {
                seq[i]+='S';

            }
            else if (s[i]=='S')
            {
                seq[i]+='R';

            }
        }

        for (int i = 0; i <= s.length()-1; i++)
        {
           cout<<seq[i];
        }
        
        cout<<"\n";
        
    }

    return 0;
}