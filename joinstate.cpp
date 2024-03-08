#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int n,target;
        cin>>n>>target;

        int count=0,max=0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]>=target)
            {
                count++;
            }
        
        }
        if (count==n)
        {
            cout<<n<<"\n";
            continue;
        }
        else
        {   
            int i=0;
            int sudo_count=arr[i];
            while (i<n)
            {   

                if(sudo_count>=target)
                {   
                    if(arr[i+1]<target)
                    {
                        i++;
                        sudo_count+=arr[i];
                        continue;         
                    }
                    else
                    { 
                    max++;
                    i++;
                    sudo_count=arr[i];
                    continue;
                    }
                }
                else if (sudo_count<target)
                {
                    sudo_count+=arr[i+1];
                    i++;
                }
                
            }
            cout<< max<<"\n";
            
        }
        
        
    }    


    return 0;
}