#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,t;
    cin>>t;
    while(t--)
    { 
    cin>>n;
    if (n%2!=0)
    {
        cout<<-1;
        continue;

    }
    int arr[n];
    int count=0,odd_count=0,even_count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
            {
                even_count+=1;
            }
        else
            {
                odd_count+=1;
            }
    }
    

    while(odd_count!=even_count)
        {
            if(odd_count>even_count)
            {
                count++;
                odd_count--;
                even_count++;
            }
            if(odd_count<even_count)
            {
                count++;
                even_count--;
                odd_count++;
            }
            
        }

    cout<<count;
    }
    return 0;
}