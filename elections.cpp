//wrong answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        int a,b,c;
        cin>>a>>b>>c;

        if (a>b && a>c)
        {
            if (a>50)
            {
            cout<<"A\n";
            }
            else
            {
            cout<<"NOTA\n";
            }
            
        }
        else if (c>b && c>a)
        {
            if (c>50)
            {
            cout<<"C\n";
            }
            else
            {
            cout<<"NOTA\n";
            }
        }
        else
        {
            if (b>50)
            {
            cout<<"B\n";
            }
            else
            {
            cout<<"NOTA\n";
            }
        }
        
    }
    return 0;
}