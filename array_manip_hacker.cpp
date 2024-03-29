/* 
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

input :
3
2 4 5
3 4 4
1 5 2

output:
0 0 0  0  0 0 ->adding 0 in range
0 0 5  5  5 0 ->adding 5 in range
0 0 5  9  9 0->adding 4 in range
0 2 7 11 11 2->adding 2 in range

tricks to solve in efficient way

0 0  0     0    0    0    0
0 0  5     0    0   -5    0
0 0  5     4    0   -4    0
0 2  5     4    0    0   -2
take prefix sum now
0 2  7    11    11   2   -2
*/

#include <bits/stdc++.h>
using namespace std;

int arr[100];
int main() {
 
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;      
    }
    for (int i = 1; i <= 5; i++)
    {
        arr[i]+=arr[i-1];
    }

    for (int i = 0; i <= 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}