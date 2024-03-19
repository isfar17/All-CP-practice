#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        map <int,int> mymap;
        for (int i = 0; i < n; i++)
        {   
            int x;
            cin>>x;
            mymap[x]++;

        }
        if (mymap.size()>=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(abs(mymap.begin()-> second - mymap.rbegin()->second) <=1)
            {
                cout<<"YES"<<endl;
            }
            else
                {
                cout<<"NO"<<endl;
            }
        }
        
        
        
    }
}