#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int arr[4],x,y,z;
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+3);

    for (int i = 1; i <4; i++)
    {   
        int res=arr[i]-arr[i-1];
        if(res==0)
        {
            continue;
        }
        else
        {
            cout<<res<<" ";
        }
        
    }
    
    


    

}