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
        cin>>n;
        vector <int> arr(n);
        vector <int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        arr2=arr;
        string res="NO";
        //we will try to sort the array with the given condition. we will run it n times
        for (int i = 0; i < 10; i++)
        {       
            // sorting will be done here
                for (int i = 1; i < n-1; i++)
                {
                    if (arr[i]>arr[i-1] and arr[i]>arr[i+1])
                    {
                        int tmp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=tmp;
                    }
                // we will also chck if elements are equal, as that will result no
                    if (arr[i]==arr[i-1] and arr[i]==arr[i+1])
                    {
                        res="NO";
                    }                 
                }
                // after sorting the array, we will check if the array is already sorted. we will break out
                if(is_sorted(arr.begin(),arr.end()))
                {

                    break;
                }
        }
                
        // sort the mirror array in the conventional way
        sort(arr2.begin(),arr2.end());

        // if they are same, means the array is sorted properly
        if(arr==arr2)
        {   
            res="YES";
            cout<<res<<endl;
        }
        else{
            cout<<res<<endl;
        }
        
        
    }
}