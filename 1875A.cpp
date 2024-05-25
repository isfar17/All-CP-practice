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
        int a,b,n;

        cin>>a>>b>>n;
        vector <int> arr(n+5);
        for (int i = 1; i<=n; i++)
        {
            cin>>arr[i];
        }
        long long count=0;
        long long first=b;

        for (int i = 1; i<=n; i++)
        {
            if(first+arr[i] > a)
            {
                count+=first-1;
                first=1;
                if(first+arr[i]>a)
                    first=a;
                else
                    first+=arr[i];
            }
            else if(first+arr[i] <= a)
            {
                first+=arr[i];
            }
        }

        count+=first;

        cout<<count<<endl;
         
        

    }

}