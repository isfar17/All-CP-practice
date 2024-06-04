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
        int n;
        cin>>n;
        string x,y;
        cin>>x;
        cin>>y;
        int count_x=0,count_y=0;
        for (int i = 0; i < n; i++)
        {
            if(x[i]=='1' && y[i]=='1')
            {
                continue;
            }
            else if(x[i]=='0' && y[i]=='1')
            {
                count_y++;
            }
            else if(x[i]=='1' && y[i]=='0')
            {
                count_x++;
            }
        }
        if(count_x>count_y)
        {
            cout<<count_x<<endl;
        }
        else if(count_y>count_x)
        {
            cout<<count_y<<endl;
        }
        else if(count_x==count_y)
        {
            cout<<count_x<<endl;
        }
        
    }

}