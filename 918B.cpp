#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int ips,commands;
    cin>>ips>>commands;
    map <string,string> ipcollector;
    for (int i = 0; i < ips; i++)
    {
        string a,b;
        cin>>a>>b;
        ipcollector[b]=a;
    }

    for (int i = 0; i < commands; i++)
    {
        string a,b;
        cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<"; "<<"#"<<ipcollector[b]<<endl;
    }
    
}