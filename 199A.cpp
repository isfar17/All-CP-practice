#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;

    //why this is the easiest problem? if you look at the question it says
    // every fibonacchi is the sum of 3 other fibonacchis! means the fibonacchi
    //series is 0 1 1 2 3 5 8 13 etc. now 0 is a fibonacchi too!!. now since the number
    // given is a fibonacchi number, so we can add 0 0 and the number!!
    cout<<0<<" "<<" "<<t;
 
}