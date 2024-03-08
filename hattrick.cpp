#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        char over[6];
        for (int i = 0; i < 6; i++)
        {
            cin>>over[i];
        }
        
        string hattrick="NO";
        for (int i = 0; i < 4; i++)
        {
            if (over[i]=='W' && over[i+1]=='W' && over[i+2]=='W')
            {
                hattrick="YES";
                break;
            }
            
        }
        
        
        cout<<hattrick<<"\n";
    }    

    return 0;
}