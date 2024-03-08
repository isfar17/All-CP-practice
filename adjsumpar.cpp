#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while (t--)
    {
        long n;
        cin>>n;

        int arr[n];
        int binarr[n];

        fill_n(arr,n,1); // an algorithm function which sets default value for every index

        for (int i = 0; i < n; i++)
            {
                cin>>binarr[i];
            }
        for (int i = 0; i <= n-1; i++)
        {
            if(i==n-1)
            {
                break;
            }
            else
            {
                if (binarr[i]==1)
                {
                    if ((arr[i]+arr[i+1])%2 ==1 )
                    {
                        continue;
                    }
                    else
                    {
                        arr[i+1]++;
                        continue;
                    }
                }
                else if(binarr[i]==0)
                {
                    if ((arr[i]+arr[i+1])%2 ==0 )
                    {
                        continue;
                    }
                    else
                    {
                        arr[i+1]++;
                        continue;       
                    }  
                }

            }
        }
        if ((arr[0]+arr[n-1])%2 == binarr[n-1])
            {   
                cout<<"YES\n";
            }
        else
            {
                cout<<"NO\n";
            }
        
    }

    return 0;
}