#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {   
        
        long long int alice,bob;
        cin>>alice>>bob;
    

        if (alice%2==0 && bob%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else if (alice%2!=0 && bob%2!=0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
               
    }

    return 0;
}