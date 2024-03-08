#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int problem,toStart;
    cin>>problem>>toStart; 

    int count=0;
    int remaining=240-toStart;
    int i=1;
    while (i<=problem)
    {
        if(remaining-5*i >=0)
        {
            remaining-=5*i;
            count++;
            
        }
        i++;
    }
    cout<<count;
    
}