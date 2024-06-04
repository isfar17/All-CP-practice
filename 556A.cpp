#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield); 
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    int n;
    string data;
    cin>>n;
    cin>>data;
    
    int count_0=count(data.begin(),data.end(),'0');
    int count_1=count(data.begin(),data.end(),'1');
    cout<<max(count_0,count_1)-min(count_0,count_1)<<endl;


}