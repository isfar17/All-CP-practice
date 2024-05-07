#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;

    vector <pair<string,string>> myvec(t);
    for (int i = 0; i < t; i++)
    { 
        cin>>myvec[i].first>>myvec[i].second; 
    }
    sort(myvec.begin(),myvec.end()); // unique works with consecutive elements. so we have to sort first
// The unique() function in C++ helps remove all the consecutive duplicate elements from the array or vector.
    int size=unique(myvec.begin(),myvec.end()) - myvec.begin();
    //subtracting any iterator form begin returns the position of the iterator. and
    // unique decreases the size of the vector by eliminating the duplicate values. thus
    // at the end it returns the last iterator or the last index of the unique array. and
    // by deleting begin() we get the size of the array.

    cout<<size<<endl;
    
 
}