#include <bits/stdc++.h>
using namespace std;

int pre_sum[10];
int arr[10];
int d2_arr[10][10];
int pre_sum_2d[10][10];


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    int val;
    cin>>val;
    pre_sum[0]=0;
    if(val==1)
    {
    for (int i = 1; i <= t; i++)
        {
            cin>>arr[i];
            pre_sum[i]=pre_sum[i-1]+arr[i];

        }

    for (int i = 1; i <= t; i++)
    {
       cout<<pre_sum[i]<<" ";
    }
    }
    else
    {
        for (int i = 1; i <= t; i++)
        {
            for (int j = 1; j <= t; j++)
            {
                cin>>d2_arr[i][j];
                pre_sum_2d[i][j]=d2_arr[i][j]+pre_sum_2d[i-1][j]+pre_sum_2d[i][j-1]-pre_sum_2d[i-1][j-1];

            }
            
        }
        for (int i = 1; i <= t; i++)
        {
            for (int j = 1; j <= t; j++)
            {
                cout<<pre_sum_2d[i][j]<<" ";

            }
            cout<<endl;
            
        }
        
    }


    
}