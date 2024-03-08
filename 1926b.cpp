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
        
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
           if(arr[i]==0)
           {
            continue;
           }
           else if(arr[i+1]==arr[i])
           {
                cout<<"SQUARE";
                break;
           }
           else
           {
                cout<<"TRIANGLE";
                break;

           }
        }
        cout<<endl;
            
        
    }
  
}