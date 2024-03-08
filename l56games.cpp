//solution seen then submitted

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
        int static_array[n];

        int odd=0;
        for (int i = 0; i < n; i++)
        {   
            cin>>static_array[i];
            if (static_array[i]%2 !=0)
            {
                odd++;
            }
        }
        if(n==1 || odd%2==0)
        {
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }


    }

    return 0;
}