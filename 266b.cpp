#include <bits/stdc++.h>
using namespace std;

int main() 
{       
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    string s;
    int n,t;
    
    cin>>n>>t;
    cin>>s;
    int len=s.size();

    while (t--)
    {
        int i=0;
     
        while (i<len-1)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i+=2;
            }
            else
            {
                i++;
            }
        }

    }
    cout<<s;
    
    
    
 return 0;   
}