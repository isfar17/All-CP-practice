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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        string res="YES\n";
        for (int i = 2; i < n-1; i++)
        {
            a[i-1]=a[i-1]-1;
            a[i]=a[i]-2;
            a[i+1]=a[i+1]-1;

            for (int j = 0; j < i; j++)
            {
                if(a[j]<0)
                {
                    res="NO\n";
                    break;
                }
            }
            
        }
        cout<<res;
        
    }

}