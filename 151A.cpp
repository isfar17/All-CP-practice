#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x=(k*l)/nl;
    int y=(c*d);
    int res=min(x,y);
    cout<<min(res,(p/np))/n;

}