#include <bits/stdc++.h>
using namespace std;

int main() 
    {
        int freq_arr[10]={0};
        int arr[10];
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < 10; i++)
        {
            freq_arr[arr[i]]++;
        }
        for (int i = 0; i < 10; i++)
        {
            cout<<"the value"<<i<<" occurred" <<freq_arr[i]<<endl;
        }
        
        
        return 0;
    }