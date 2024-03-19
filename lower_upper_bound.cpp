#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n=6, x=16, low_index=0, high_index=n-1, ans=n;

    int a;
    cin>>a;
    if(a==1)
    {
        while (low_index<=high_index)
        {
            int mid_index=(low_index+high_index)/2;
            
            if(arr[mid_index]>=x)
            {
                ans=mid_index;
                high_index=mid_index-1; // cut the right half

            }
            else
            {
                low_index=mid_index+1; // cut the left half
            }
            
        }
        cout<<ans;
    }
    else
    {
        while (low_index<=high_index)
        {
            int mid_index=(low_index+high_index)/2;
            
            if(arr[mid_index]>x)
            {
                ans=mid_index;
                high_index=mid_index-1; // cut the right half

            }
            else
            {
                low_index=mid_index+1; // cut the left half
            }
            
        }
        cout<<ans;    
    
    }

}