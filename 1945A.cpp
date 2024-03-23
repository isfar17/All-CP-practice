#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int count=-1;
        int demo=b+c;
        int demo_c=c;
        c=0;
        while (demo>=b && (demo%3)!=0 && c<demo_c)
        {
            demo--;
            c++;
        }
        if(demo%3!=0)
        {
            count=-1;
        }
        else
        {
            count=a;
            count+=(demo/3);
            if(c%3==0)
            {
                count+=(c/3);
            }
            else if(c%2==0)
            {
                count+=(c/2);
            }
            else if(c%1==0)
            {
                count+=(c/1);
            }

        }
        cout<<count<<endl;
    }
}