#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--)
    {
        vector <int> val(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>val[i];
        
        }
        sort(val.begin(),val.end());
        cout<<val[1]<<endl;
        
    }
 
}