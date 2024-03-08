#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    string t;
    cin>>t;

    if(t.size()==1)
    {
        cout<<"NO";
        return 0;

    }

    int count=0;
    
    for (int i = 0; i < t.size(); i++)
    {
        if ((t[i]=='4') || (t[i]=='7'))
        {
            count++;
        }

        
    }
    if (count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}