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
        if ((n+1)%3 ==0 or (n-1)%3==0)
        {
           cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        } 
    }
}