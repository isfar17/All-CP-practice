#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    // file()
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {   
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int maxim=1,count=1;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]-arr[i-1]<=k)
            { 
                count++;
                maxim=max(count,maxim);
            }
            else
            {
                count=1;
            }
        }
        cout<<n-maxim<<endl;   
    }
}