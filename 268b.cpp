#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int n;
    cin>>n;

    int count=0,i=0;
    while(n!=1)
    {
        count+=(n-1)+((n-1)*i)+1;
        i++;
        n--;

    }
    count+=n;
    
    cout<<count;
 
}