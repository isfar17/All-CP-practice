#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    int police=0;
    int unsolved=0;
    for (int i = 0; i < t; i++)
    {   
        int value;
        cin>>value;
        if(value==-1)
        {
            if(police>0)
            {
                police-=1;
                continue;
            }
            else
            {
                unsolved+=1;
            }
        }
        else if(value>0)
        {
            police+=value;
        }
    }
    cout<<unsolved;
    

    
}   