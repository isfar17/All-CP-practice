#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int n,child;
        cin>>n>>child;

        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        string all_below_child="False";

        int remains,min;

        
        min=INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]<child)
            {
                continue;
            }
            else 
            {
                all_below_child="True";
                remains=arr[i]%child;
                if (remains<=min)
                {
                    min=remains;
                }
            }
        }

        if(all_below_child=="False")
        {
            cout<<-1<<"\n";
        }
        else 
        {
            cout<<min<<"\n";
        }


      
        
    }
    
}