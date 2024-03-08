#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int s,n;
    cin>>s>>n; 

    vector<pair<int,int> >my_vec;
    for (int i=0; i<n; i++)
        {
        int x,y;
        cin>>x>>y;
        my_vec.push_back( make_pair(x,y) );   
        }

    sort(my_vec.begin(), my_vec.end());
    string complete="YES";

    for (int i = 0; i < n; i++)
    {
        if(my_vec[i].first>=s)
        {   
            complete="NO";
            break;
        }
        else
        {
            s+=my_vec[i].second;
        }

    }
    cout<<complete;
    
    
}