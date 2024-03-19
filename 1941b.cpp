#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector <int> arr(n+1);
        for (int i = 0; i <= n; i++)
        {
            cin>>arr[i];
        }
        string res="YES";
        for (int i = 1; i <n; i++)
        {
            int minimum=min({arr[i-1],arr[i],arr[i+1]});

            arr[i-1]-=minimum;
            arr[i]-=(2*minimum);
            arr[i+1]-=minimum;
            
            if(arr[i]<0 or arr[i+1]<0 or arr[i-1]<0)
            {
                res="NO";
                break;
            }

        }
        for (int i = 1; i <=n; i++)
        {
            if(arr[i]<0 or arr[i]>0)
            {
                res="NO";
                break;

            }

        }
        cout<<res<<endl;      
    }

}