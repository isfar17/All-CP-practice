#include <bits/stdc++.h>
using namespace std;

int main() {

    string x;
    cin>>x;

    int arr[27]={0};
    
    for (int i = 0; i < x.size(); i++)
    {
        arr[int(x[i])-97]+=1;
    }
    int max_index=0;
    int max_freq=0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>max_freq)
        {
            max_index=i;
            max_freq=arr[i];

        }   
    }
    
    cout<<char(max_index+97);
    return 0;
}