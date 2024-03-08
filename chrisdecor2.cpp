#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int x,y,z;
        cin>>x>>y>>z;
        string possible="NO";
        while (z>=3 && x !=0 && y>=0)
        {
            x-=(z/3);
            y-=(z/3);
            z=(z/3);

            if(x==0 && y==0)
            {
                possible="YES";
                break;
            }
        }


        if (possible=="NO" && y>=0)
        {
            if(x<=(y/2))
            {
                possible="YES";
            }
        }
        cout<<possible<<"\n";
        
        
        
    }

    return 0;
}