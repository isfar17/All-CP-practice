#include <bits/stdc++.h>
using namespace std;

const int mx=2e5+10;
int p[mx];
int a[mx];
int b[mx];

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++) cin>>p[i];
    for (int i = 1; i <= n; i++) cin>>a[i];
    for (int i = 1; i <= n; i++) cin>>b[i];

    priority_queue<int, vector<int> ,greater<int>> color[5][5];
    // there are 3 types of color. so we will take 2 more spaces in case
    for (int i = 1; i <= n; i++)
        color[a[i]][b[i]].push(p[i]);
    
    int m;
    cin>>m;
    while (m--)
    {
        int c;
        cin>>c;
        
        int answer=INT_MAX;
        int front,back;

        for (int i = 1; i <=3; i++)
        {
            if(!color[c][i].empty() && color[c][i].top()<answer)
            {
                answer=color[c][i].top();
                front=c;
                back=i;
            }
        }

        for (int i = 1; i <=3; i++)
        {
            if(!color[i][c].empty() && color[i][c].top()<answer)
            {
                answer=color[i][c].top();
                front=i;
                back=c;
            }

        }

        if(answer==INT_MAX)
        {
            answer=-1;
        }
        else{
            color[front][back].pop();
        }

        cout<<answer<<" ";
        
    }
    cout<<endl;
    
    
    
}