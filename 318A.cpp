#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int s=9;
    while(s--)
    { 
    long long t,k;
    cin>>t>>k;

    long long result=0;
    long long index=0;
    long long p;
    if(t%2!=0)
        p=t/2+1;
    else
    {
        p=t/2;
        }
    if (k>p)
    {   
        if(t%2!=0)
        {
            index=k-((t/2)+1);
        }
        else
            index=k-(t/2);

        result=(index)*2;
    }
    else
    {
        result=k*2-1;

    }
    cout<<result<<endl;
    }
}