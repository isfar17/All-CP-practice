#include <bits/stdc++.h>
using namespace std;

int main() 
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   int n;
        cin>>n;
        string s;
        cin>>s;
        int one_count=0;
        int zero_count=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='0')
            {
                zero_count++;
            }
            else if (s[i]=='1')
            {
                one_count++;
            }  
        }

        int steps=0;
        if (zero_count==0)
        {
            steps=1;
        }
        else if (zero_count<one_count)
        {
            steps++;
            steps+=zero_count;
            
        }
        else if (zero_count>=one_count)
        {
            steps+=one_count;
            
        }
        cout<<steps<<"\n";
        
         
    }

    return 0;
}