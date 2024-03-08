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
       int first_pos;
       int last_pos=0;

       for (int  i = 0; i < n; i++)
       {
        cin>>arr[i];
        if (arr[i]==1)
            {
                first_pos=i+1;
            }
        if (arr[i]==n)
            {
                last_pos=i+1;
            }
       }
       cout<<first_pos<<" "<<last_pos<<endl;
       
    
    }    

    return 0;
}