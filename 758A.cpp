#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    int t;
    cin>>t;
    int sum=0,maximum=INT_MIN;
    for (int i = 0; i <t; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        maximum=max(maximum,x);

    }
    cout<<(maximum*t)-sum<<endl;


}