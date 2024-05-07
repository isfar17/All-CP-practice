#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {

    optimize
    int n;
    cin>>n;

    while(n--)
    {
        int rating;
        cin>>rating;
        if(rating>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(rating>=1600)
        {
            cout<<"Division 2"<<endl;;
        }
        else if(rating>=1400)
        {
            cout<<"Division 3"<<endl;;
        }
        else if(rating<= 1399)
        {
            cout<<"Division 4"<<endl;;
        }
    }
 
}