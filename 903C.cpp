#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;
    int size=t;
    /*the idea here is to store the variables in array, then make a map of elements
    in the array and count their occurence. so the most occured value is the answer
    . why? as we know we only can put small boxes to bigger one. so the if there are
    a box number which has appeared 4 times and all the small box n times. we can say
    that by putting small ones to bigger, we come to a point where we reach at the
    biggest box number. and cant go further. so the number of big boxes are the answe*/
    map<int,int> counter;
    int arr[100000];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        counter[arr[i]]++;
    }
    int maxim=0;
    for (int i = 0; i < t ; i++)
    {
        maxim=max(maxim,counter[arr[i]]);
    }
    cout<<maxim;
    
    
    
 
}