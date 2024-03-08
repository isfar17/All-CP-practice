#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        int arr[26];

        fill_n(arr,26,0); // an algorithm function which sets default value for every index

        cin>> s;

        for (int i = 0; i < s.length(); i++)
        {
            arr[s[i]-97]++;
        }
        string possible="YES";

        for (int i = 0; i < 26; i++)
        {
            if (arr[i]%2 != 0)
            {
            possible="NO";
            break;
            }
        }
        
        cout<<possible<<'\n';

        

    }
    return 0;
}