#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m,n;
    cin>>m>>n;
    int res=min(m,n);
    if(res%2!=0)
    {
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }


}