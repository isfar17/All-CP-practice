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
        string s;
        int count_1=0;
        int n,last_track;
        cin>>n;
        cin>>s;

        for (int i = 0; i <n;i++)
        {
            if(s[i]=='1')
            {
                count_1++;
                last_track=i;
            }

        }
        if(count_1>0 && count_1%2==0 && count_1!=2)
        {
            cout<<"YES"<<endl;
        }
        else if(count_1==2)
        {   
            if(s[last_track]==s[last_track-1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else if(count_1==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

} 