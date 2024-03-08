#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    int new_t=t;
    string lucky="YES";
    while (new_t>=1)
    {    
        int rem=new_t%10;
        if(rem!=4 && rem !=7)
        {   
            lucky="NO";
            break;
        }
        new_t=new_t/10;

    }
    int rem_4;
    int rem_7;
    if (lucky=="NO")
    {
        rem_4=t%4;
        rem_7=t%7;
        if (rem_4==0 || rem_7==0)
        {
            lucky="YES";
        }
    }

    cout<<lucky;
    
}