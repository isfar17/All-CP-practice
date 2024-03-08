#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;
        int minimum=0,maximum=n;
        if (n==1)
        {
            minimum=1;
            
        }
        
        else if (n%2==0)
        {
            minimum=n/2;
        }
        else
        {
            minimum=(n/2)+1;

        }
        
        cout<<minimum<<" "<<maximum<<"\n";
        

    }

    return 0;
}