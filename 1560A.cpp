#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[1000];
    int val=1;
    for (int i =  0; i <1000; i++)
    {
        int mod=val%3;
        int last_digit=val%10;
        while (mod==0 || last_digit==3)
        {
            val++;
            mod=val%3;
            last_digit=val%10;
        }
        arr[i]=val;
        val++;

    }

    int t;
    cin>>t;
    
    while(t--)
    {
        int i;
        cin>>i;
        cout<<arr[i-1]<<endl;
    }
 
}