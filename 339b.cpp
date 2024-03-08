#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m; 

    long long int initial=1,distance=0;
    for (int i = 0; i <=m; i++)
    {   
        int x;
        cin>>x;
        if(x>initial)
        {
            distance+=(x-initial);
            initial=x;
        }
        else if(x<initial)
        {
            distance+=(n-initial);
            distance+=x;
            initial=x;
        }
    }
    cout<<distance;
    


}