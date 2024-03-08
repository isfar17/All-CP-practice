#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int i=0,j=1,counter=0;

        while (i<s.length()-1)
        {
            if(s[i] =='<' && s[j] =='>')
            {
                counter++;
            }
            i++;
            j++;
        }
    
        cout<<counter<<'\n';
    }
    return 0;
}