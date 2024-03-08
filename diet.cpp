#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int days,target,remain=0;

        cin>>days>>target;

        int arr[days];

        for (int i = 0; i < days; i++)
            {
                cin>>arr[i];
            }
        for (int i = 0; i < days; i++)
            {
                if (arr[i]>=target)
                    {
                        remain+=arr[i]-target;
                        continue;
                    }
                else if (arr[i]<target)
                    {
                        if ((arr[i]+remain)<target)
                            {   
                                remain=-1;//making remain value negative 
                                cout<<"NO "<<i+1<<"\n";
                                break;
                                //
                            }
                        else if ((arr[i]+remain)>=target)
                            {
                                remain-=target-arr[i];
                            }
                    }
            }

        if (remain>=0) 
        {
            cout<<"YES\n";
        }
        
        
    }
    
    return 0;
}