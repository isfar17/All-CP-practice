#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

int a[200000+123];

int main() {

    optimize();

    int n;
    cin>>n;
    while(n--)
    {   
        priority_queue<pair<int,int>> q;
        int x;
        cin>>x;

        q.push({x,-1}); // our target is to keep track of first index and x(which is also the last index)

        int cnt=1;
        while (!q.empty())
        {   

            int left=q.top().second* -1;
            int length=q.top().first;
            q.pop();

            int right=left+length-1;

            int mid;
            
            if(length%2==1)
            {
                mid=(left+right)/2;
            }
            else
            {
                mid=(left+right-1)/2;
            }
            a[mid]=cnt;
            cnt++;

            int l1,l2,r1,r2;
            l1=left;
            r1=mid-1;
            l2=mid+1;
            r2=right;
            if(l1<=r1)
            {
                q.push({r1-l1+1,-l1});
            }
            if(l2<=r2)
            {
                q.push({r2-l2+1,-l2});
            }

        }
        for (int i = 1; i <=x; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        
        
    }
 
}