#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
       float p,l;
       cin>>p>>l;
       int literacy=(l/p)*100;
       if (literacy>=75)
       {
        cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
       
    
    }    


    return 0;
}