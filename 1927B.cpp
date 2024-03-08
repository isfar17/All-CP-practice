#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    while (t--)
    {
        int len;
        cin>>len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin>>arr[i];
        }
        string data="";
        int val=0;
        for (int i = 0; i < len; i++)
        {
            if(arr[i]=='0')
            { 
                data+=to_string('a'+val);
                val++;
                }
        }
        cout<<data<<"\n";
        
        
    }
    
    
    
}