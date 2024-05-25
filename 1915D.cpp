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
        int x;
        cin>>x;
        string data;
        cin>>data;
        
        for (int i = 1; i < data.size()-1; i++)
        {
            if(data[i]=='a' || data[i]=='e')
                continue;
            else if(data[i]=='.')
                continue;

            else if(data[i]=='b' || data[i]=='c' || data[i]=='d')
            {
                if(data[i+1]=='a' || data[i+1]=='e')
                {   
                    if(data[i-1]!='.')
                        data.insert(i,".");
                }
                else if(data[i+1]=='b' || data[i+1]=='c' || data[i+1]=='d')
                {   
                    if(data[i+1]!='.')
                        data.insert(i+1,".");
                }
            }
        }
        cout<<data<<endl;
        




    }

}