#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--)
    {
        int n,alphbt_incrsr=0,counter=0;
        cin>>n;
        string possible="YES",result="";
        if (n%2!=0)
        {
            possible="NO";   
        }
        else
        {
            while (counter<n)
            {
                result+=('A'+alphbt_incrsr);
                result+=('A'+alphbt_incrsr);
                counter+=2;
                alphbt_incrsr+=1;
            }
            
        }
        if (possible!="NO")
        {   
            cout<<"YES"<<"\n";
            cout<<result<<endl;
        }
        else
        {
            cout<<possible<<endl;
        }
        
        
    }
}