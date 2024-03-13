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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {   
            int x;
            cin>>x;
            arr.push_back(x);
        }
        // so the problem states that k means simply portion or subarray. if k is one, that means,
        // we will make a subarray from the array with 1 element . so for example we have an array
        // 1 2 3 5. now if we see k=1, we can only make 1 subarray. that can be 1 or 2 or the other 
        // numbers . now for unsorted array 13 47 5 9. we can only take 1 element. and thus we cant 
        ////sort it. because we are told to reverse the array as much time as we can. but if k=2, we 
        //can devide the array in 2 portion. 13 47 and 5,9. then we can sort it and take another 2 
        //portion and sort  it. thus it is wasy to solve the problem if k>1. if k==1 then the array must be sorted

        if(is_sorted(arr.begin(),arr.end()) || k>1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}