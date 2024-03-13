#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        double a,b;
        cin>>a>>b;

        double maximum=max(a,b);
        double minimum=min(a,b);
        double res=ceil((maximum-minimum)/10.0);
        int x=res;
        cout<<fixed<<x<<endl;
    }

}