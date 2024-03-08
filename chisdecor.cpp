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
        
        if(x>y)
        {
            cout<<"NO\n";
        }
        else{ 

        while (z>=3 && x !=0 && y>=0)
        {   
            //keep decreasing 1 big 3 small gifts first till smalls are finished
            x-=1;
            y-=1;
            z-=3;
            //while decreasing if we see leafs(x) and big gifts are equal to zero, we break
            if(x==0 && y==0)
            {
                possible="YES";
                break;
            }
        }

        //if the while loop fails to solve, means small gifts are finished, we check for
        //bigger ones, if now keeping 2 gifts per leaf is equal to the leafs then its yes or else no
        if (possible=="NO" && y>=0)
        {
            if(x<=(y/2))
            {
                possible="YES";
            }
        }
        cout<<possible<<"\n";
        
        }
        
        
    }

    return 0;
}