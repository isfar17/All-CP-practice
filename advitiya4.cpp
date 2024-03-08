#include <bits/stdc++.h>

using namespace std;


void counter_len(string s)
{   
    char prev=s[0];
    int max=-1 ,counter=1;
    for (int i = 1; i < s.size(); i++)
    {   
        if (s[i]==prev)
            {
                counter++;
                prev=s[i];
                if (counter>=max)
                    {
                        max=counter;
                    }
            }
        else
        {
            if (counter>=max)
                {
                    max=counter;
                    counter=1;
                    prev=s[i];
                }
        }

    }
    cout<<max<<" ";
    
}


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int x,y;
        string value;

        cin>>x>>y;
        cin>>value;
        counter_len(value);


        
        for (int i = 0; i < y; i++)
        {   
            char p;
            cin>>p;
            value+=p;
            counter_len(value);
        }
        cout<<"\n";


        
    }
    return 0;
}