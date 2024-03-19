#include <bits/stdc++.h>
using namespace std;

vector <int> dp(15,-1);

int func(int pos)
{
 if(pos==1) return 1;
 if(pos==2) return 2;

 if (dp[pos]!=-1) return dp[pos];


 return dp[pos]=func(pos-1)+func(pos-2);
 
}
int main() {

    int x=func(8);
    for (int i = 0; i < 15; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<x;
    return 0;
}