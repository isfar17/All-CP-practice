#include <bits/stdc++.h>
using namespace std;

const int n=1e7;
int maxarray[n];

int main() {
    // globally we can set array size upto 10^7 where inside of the main function the limit is 10^5.
    int arr1[100];
    arr1[0]=4;
    cout<<arr1[0]<<endl;
    int x=1e5;
    int newarray[x];
    for (int i = 0; i <= 100; i++)
    {
        arr1[i]=i;
        cout<<arr1[i]<<endl;
    }
    
    return 0;
}
