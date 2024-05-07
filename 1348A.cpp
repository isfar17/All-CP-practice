#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

long long int arr[35];
int main() {

    optimize()

    int t;
    cin>>t;
    for (int i = 1; i <=30; i++)
    {
        arr[i]=pow(2,i);
    }
    
    while(t--)
    {   
        int n;
        cin>>n;
        long long sum1=0,sum2=0;
        sum1=arr[n];
        for (int i = 1; i <n/2; i++)
        {
            sum1+=arr[i];
        }

        for (int i = n/2; i <n; i++)
        {
            sum2+=arr[i];
        }
        cout<<sum1-sum2<<endl;
        
    }

}