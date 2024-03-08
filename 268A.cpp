#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    int home[t],away[t];
    for (int i = 0; i < t; i++)
    {
        cin>>home[i]>>away[i];
    }
    int count=0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0;  j<t; j++)
        {
            if(home[i]==away[j])
            {
                count++;
            }
        }
        
    }
    cout<<count;
    
}