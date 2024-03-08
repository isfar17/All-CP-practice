#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    float working_days=120;
    while (t--)
    {   
        float n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i <s.size();i++)
        {
            int digit=s[i]-48;
            if(digit==1)
            {
                count++;
            } 
        }
        int percentage=((count+(working_days-n))/working_days)*100;
        if(percentage<75)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }        
        
    }

    return 0;
}