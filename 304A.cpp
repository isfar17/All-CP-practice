#include <bits/stdc++.h>
using namespace std;

const int mx=2e8+12;
bool squares[mx];

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int n;
    cin>>n;
    // pre sum pre hash calculation
    for (int i = 1; i <= n; i++)
    {   
        squares[i*i]=1;
    }
    int counter=0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {   
            int x=(a*a)+(b*b);
            if(squares[x])
            {
                counter++;
            }
        }
        
    }
    cout<<counter;
    
    

    
 
}