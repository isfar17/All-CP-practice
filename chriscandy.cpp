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
        int last_got[n]={0};
        int counter=0;

        for (int i = 0; i <= n-2; i++)
        {
            
            for (int j = i+1; j <= n-1; j++)
            {
                
            if(arr[i]>arr[j])
            {
                if (last_got[j]==0)
                {

                counter++;
                last_got[j]++;

                }
            }
            

            }

        }
        cout<<counter<<"\n";
    }
    

    return 0;
}