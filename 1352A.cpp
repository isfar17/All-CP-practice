#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    
    while (t--)
    {
        int x;
        cin>>x;
        int count=0;
        vector<int> nums;

        int times=1;
        while (x>0)
        {
            int rem=x%10;
            x/=10;

            if(rem!=0)
            {
                count++;
                nums.push_back(rem*times);
            }
            times*=10;
        }
        cout<<count<<endl;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        
        
    }
    

}