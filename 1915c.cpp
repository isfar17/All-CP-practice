#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        long long count=0;
        int  n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {   
            long long x;
            cin>>x;
            count+=x;
        }
        
        
        double result=sqrt(count);
        if(int(result)==result)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }

    return 0;
}