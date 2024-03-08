#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int n,r;
        cin>>n>>r;

        string s;
        string access="YES";
        cin>>s; 
        int remain=r;
        int i = 0;

        if(s[0]=='0')
        {
            cout<<"NO"<<"\n";
            continue;
        }
        while (i<s.size())
        {   
            
            if (s[i]=='1')
            {
                remain=r;
            }   
            else
            {
                remain--;
                if(remain==0 && s[i+1] != '1' && i!=s.size()-1)
                {
                    access="NO";
                    break;
                }
                
            }
            i++;
        }
        
        cout<<access<<"\n";
        
    
    }    

    return 0;
}