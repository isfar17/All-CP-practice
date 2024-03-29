#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,mish_count=0,chrs_count=0;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            mish_count++;
        }
        if(b>a)
        {
            chrs_count++;
        }
        
    }
    if(mish_count>chrs_count)
    {
        cout<<"Mishka";
    }
    else if(mish_count<chrs_count)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
 
}