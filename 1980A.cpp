#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    // file()
    int t;
    cin>>t;

    
    while(t--)
    {
        map<char,int> counter;
        for (int i = 0; i <7; i++)
        {
            counter['A'+i]=0;
        }
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        for (int i = 0; i < x.size(); i++)
        {
            counter[x[i]]++;
        }
        int count=0;
        for (int i = 0; i < 7; i++)
        {   
            if(counter['A'+i]==0)
                count+=m;
            else if(counter['A'+i]<m)
                count+=(m-counter['A'+i]);
            else
                continue;
        }
        cout<<count<<endl;
        
    }

}