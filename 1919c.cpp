#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {  
        int n;
        cin>>n;
        
        int arr[n];
        vector <int> dummy_odd;
        vector <int> dummy_even;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                dummy_even.push_back(arr[i]);
            }
            else
            {
                dummy_odd.push_back(arr[i]);

            }
        }
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
        if(n==2)
        {
            if(arr[0]<arr[1])
            {
                cout<<1<<"\n";
                continue;
            }
            else
            {
            cout<<0<<"\n";
            continue;;
            }
        }
        dummy_even.push_back(0);
        dummy_odd.push_back(0);

        int minimum_1=0, minimum_2=0;
        for (int i = 0; i < dummy_even.size()-1 ;i++)
        {
            if(dummy_even[i]<dummy_even[i+1])
            {
                minimum_2++;
                // cout<<dummy_even[i];            
            }
            if(dummy_odd[i]<dummy_odd[i+1])
            {
                minimum_1++;
                // cout<<dummy_odd[i];            
            }

        }
 
        cout<<minimum_1+minimum_2-1<<"\n";
         
        


    }

    return 0;
}