#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while (t--)
    {   
        int n,k;
        cin>>n>>k;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin>>p;
            arr.push_back(p);
        }
        // we have to find the maximum point of all the points. that is the minimum amount we need
        //  to travel all the way. if the volume is less, and we get a bigger value, means we wont be
        // able to come back 
        int maximum=0;
        int previous=0; //at initial point
        for (int i = 0; i < n; i++)
        {
            int differ=arr[i]-previous;
            maximum=max(maximum,differ);
            previous=arr[i];

        }
        // in the end, we have to go from last value to target and come back, so we sbtract the last 
        //value from target and multiple by 2. as in this case we are coming back
        maximum=max(maximum,2*(k-arr[n-1]));

        cout<<maximum<<endl;
    }

}