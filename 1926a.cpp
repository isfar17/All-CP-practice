#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    while (t--)
    {
        string x;
        cin>>x;
        int count_a=0,count_b=0;
        for (int i = 0; i < x.size(); i++)
        {
            if(x[i]=='A')
            {
                count_a+=1;
            }
            else if(x[i]=='B')
            {
                count_b+=1;
            }
        }
        if(count_a>count_b)
        {
            cout<<'A'<<endl;
            
        }
        else{
            cout<<'B'<<endl;
        }
        
    }  
}