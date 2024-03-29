#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t; 

    while (t--)
    {
        int len;
        cin>>len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin>>arr[i];
        }
        string data="";
        char alphabet='a';

        int indx_str=0,i=0,alpha_increaser=0;

        while (i<len)
        {
            switch (arr[i])
            {
            case 0:
                data+=(alphabet+alpha_increaser);
                break;
            case 1:
                data+=(alphabet+alpha_increaser);
                break;
            
            default:
                break;
            }
        }
        
        
        
    }
    
    
    
}