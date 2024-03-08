#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while (t--)
    {
        long long x,y;
        cin>>x>>y;

        while (x!=0)
        {
            if(x>y)
            {
                long long temp=x;
                x=y;
                y=temp;
            }
            else
            {
                long long temp=(y-x);
                y=x;
                x=temp;
            }

        }
        cout<<y<<"\n";
        
    }
    
    return 0;
}