#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {

    optimize
    int t;
    cin>>t;

    int arr[t][t];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int diag_a=0,diag_b=0 ,i=0;
    while((t-1)>=0)
    {
       diag_a+=arr[i][i]; 
       diag_b+=arr[i][t-1]; 
       i++;
       t--;
    }
    cout<<abs(diag_a-diag_b);
 
}