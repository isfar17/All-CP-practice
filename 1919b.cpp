#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {    
        int n;
        cin>>n;

        string s;
        cin>>s;
        int plus_count=0;
        int minus_count=0;
        
        for (int i = 0; i <s.size(); i++)
        {   
            if(s[i]=='-')
            {
                minus_count+=1;
            }
            else if(s[i]=='+')
            {
                plus_count+=1;
            }
        }
        cout<<abs(plus_count-minus_count)<<"\n";
        
    }

    return 0;
}