#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;

    int first_value, second_value;
    first_value=a*c;
    second_value=b*c;
    cout<<max(first_value,second_value);

    return 0;
}