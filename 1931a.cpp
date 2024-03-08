#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    while (t--)
    {
        int val;
        cin>>val;
        if ( val>=3 && val<=27)
        {   
            string x="aa";

            val=val-2;
            char p=96+val;
            x=x+p;

            cout<<x<<endl;
        }

        else if (val >27 && val<=53)
        {   
            string x="a";

            val=val-26-1;
            char p=96+val;

            x=x+p;
            x+='z';
            cout<<x<<endl;
        }
        
        else if (val>52 && val<=78)
        {   
            string x="";

            val=val-52;
            char p=96+val;

            x=x+p;
            x+="zz";
            cout<<x<<endl;
        }
        
    }

}