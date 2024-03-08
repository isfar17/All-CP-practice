#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    int x,maximum,minimum,count=0;

    cin>>x;

    maximum=x;
    minimum=x;

    t--;

    while (t--)
    {
        int p;
        cin>>p;
        if(p>maximum)
        {
            count++;
            maximum=p;
        }
        else if(p<minimum)
        {
            count++;
            minimum=p;
        }
    }
    cout<<count;


}