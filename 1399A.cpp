#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while (t--)
    {
        int p;
        cin>>p;
        vector<int> arr;
        
        for (int i = 0; i < p; i++)
        {
          int x;
          cin>>x;
          arr.push_back(x);
        }        
        
        sort(arr.begin(),arr.end());

        int i=1;
        while(i<p && i<=arr.size()-1)
        {
          if(arr[i]-arr[i-1]==1 || arr[i]-arr[i-1]==0) 
            {
                auto it = find(arr.begin(), arr.end(),arr[i-1]);
                if (it != arr.end()) 
                {
                    arr.erase(it);
                }
            }
            else
            {
            i++;
            }
        }

        if(arr.size()==1)
        {
            cout<<"YES\n";
        }  
        else{
            cout<<"NO\n";
        }
        
    }

}