#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

int arr[1000000]={0};

int main() {

    optimize()
    //PRESUM OR PRECALCULATION
    for (int i = 2; i<1000000; i++)
       {
        if(arr[i]==0)
        {
            for (int j = 2; i*j <= 1000000; j++)
            {
                arr[i*j]=1;
            }
            
        }
    }
    
    int t;
    cin>>t;

    for (int i = 0; i <t; i++)
    {
    
    {
        long long int x;
        long long sq;
        cin>>x;

        sq=sqrt(x);
        if(x==1)    
            cout<<"NO"<<endl;
        else if(sq*sq==x && arr[sq]==0) //0 means that number is a prime number
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    }

}