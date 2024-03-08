//watched video.

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        string s1,s2;
        cin>> s1>>s2;
        int max=0,min=0;
        for (int i = 0; i < s1.size(); i++)
        {   
            
            if (s1[i]=='?' || s2[i]=='?')
            {
                min+=0;
                max+=1;
            }
            else if (s1[i]!='?' && s2[i]!='?')
            {   
                if (s1[i]!=s2[i])
                {
                    min+=1;
                    max+=1;
                }
                
            }
            
        }
        cout<<min<<" "<<max<<'\n';
        
    }
    return 0;
}