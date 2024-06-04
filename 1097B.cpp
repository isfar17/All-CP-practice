#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    int t;
    cin>>t;

    vector<int> arr(t);
    int sum=0;
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==360)
        cout<<"YES"<<endl;
    else
    {
        sort(arr.begin(),arr.end());
        int curr=arr[t-1];
        int i=t-2;
        while (i>=0)
        {   
            if(curr-arr[i]>=0)
                curr-=arr[i];
            else
                curr+=arr[i];
            i--;
            
        }
        if(curr==0)
            cout<<"YES";
        else
            cout<<"NO"<<endl;
    }
       
}