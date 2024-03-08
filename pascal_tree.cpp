#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int pascal[n][n];//create a n x n array

    pascal[0][0]=1;//first row
    
    for (int i = 1; i < n; i++)// why not less equal to n? because we already set 1st row value. we need rows to work less than n.
    {
        pascal[i][0]=1;//first index of the row will be 1
        pascal[i][i]=1;//last index of the row  will be 1    

        for(int j=1; j<i ;j++) // since the first and last index is filled, we have to work till 1 to less than ith index.
            {
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j]; //sum to the previous side by side index value.
            }
    }
        // printing the pascal tree.
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++) 
            {
                cout<<pascal[i][j]<<" ";
            }
        cout<<endl;
    }

    return 0;
}

