#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

const int mx=10e4+123;

int main() {

    optimize()
    // file()
    int t;
    cin>>t;
    vector<int> arr(t);
    int presum[t+1]={0};

    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {   
        if(arr[i]>=0)
        {
            if(arr[i-1]<0)
            {
                presum[i]=((0-arr[i-1])+(arr[i]-0))+presum[i-1];
            }
            else
                presum[i]=(arr[i]-arr[i-1])+presum[i-1];
        }
        else if(arr[i]<0)
            presum[i]=(abs(arr[i-1])-abs(arr[i]))+presum[i-1];

    }


    cout<<presum[1]<<" "<<presum[arr.size()-1]-presum[0]<<endl;
    int mid=arr.size()/2;
    for (int i = 1; i <arr.size()-1; i++)
    {   
        if(presum[i]-presum[i-1]<presum[i+1]-presum[i])
        {
            if(presum[i]-presum[0]>presum[arr.size()-1]-presum[i])
                cout<<presum[i]-presum[i-1]<<" "<<presum[i]-presum[0]<<endl;
            else
                cout<<presum[i]-presum[i-1]<<" "<<presum[arr.size()-1]-presum[i]<<endl;
        }
        else
            if(presum[i]-presum[0]>presum[arr.size()-1]-presum[i])
                cout<<presum[i+1]-presum[i]<<" "<<presum[i]-presum[0]<<endl;
            else
                cout<<presum[i+1]-presum[i]<<" "<<presum[arr.size()-1]-presum[i]<<endl;
    }
    cout<<presum[arr.size()-1]-presum[arr.size()-2]<<" "<<presum[arr.size()-1]-presum[0]<<endl;

    

}