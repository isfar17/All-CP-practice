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
        pair <int,int> sum;

        int basic_array_1[n];
        int basic_array_2[n];
        // taking two arrays
        for (int i = 0; i < n; i++)
        {
            cin>>basic_array_1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>basic_array_2[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int sum1=basic_array_1[i]+basic_array_2[j];
                
            }
            
        }
        

    }

    return 0;
}