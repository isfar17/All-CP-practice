#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count=0;
    int t;
    cin>>t; 
    int old;
    cin>>old;
    t--;
    while (t--)
    {
        int cur;
        cin>>cur;
        if (old==cur)
        {
            old=cur;
        }
    else
    { 
        count+=1;
        old=cur; 
    }     
    }
    int x=round(2.545);
    cout<<x;

    
}