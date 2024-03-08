#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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
        int i=0,j=len-1,i_count=0,j_count=0,result=len;
        
        while (i<len && arr[i]==arr[0]) // we will keep track of the numbers from beginning until they arent same
        {
            i++;
            i_count++;
        }
        while (j<len && arr[j]==arr[len-1]) //we will keep track of numbers from last until they arent same
        {
            j--;
            j_count++;
        }
        
        if(arr[0]==arr[len-1]) // if both numbers are same from the beginning till end, we will delete those numbers from the total number and will get the rest of the numbers which has to be changed
        {
            result-=(i_count+j_count);
        }
        else // else first and last numbers arent same, so we will max out which of the counter is more, from beginning or from end
        {
            result-=max(i_count,j_count); // then we will delete the number from total 
        }
        
        cout<<max(0,result)<<endl; // in some case like 1 number or all the numbers are same, as we are deleting i and j count , we will subtract the number twice and get a negative number, so we will compare the number with 0, because in case of all numbers are same, we will want to print 0 for them.
    }

}