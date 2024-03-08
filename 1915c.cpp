#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long t;
    cin>>t;
    while (t--)
    {   
        double count=0;
        long  n;
        cin>>n;
        while (n!=0)
        {   
            float data; 
            cin>>data;  
            count+=data;
            n--;
        }
        
        float result=sqrt(count);
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