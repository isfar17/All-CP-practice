#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int low, int high, int mid)
{   
    vector <int> temp;
    int left=low;
    int right=mid+1;

    while (left<=mid && right <= high)     
    {   
        if(arr[left]<=arr[right])
         {   
            temp.push_back(arr[left]);
            left++;
           }
        if(arr[left]>=arr[right])
        {    
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // Adjust index properly
    }
    
}    
void merge_sort(int arr[],int low,int high)
{   
    if(low>=high)
        return ;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,high,mid);
}

    

int main()
{
    int arr[]={2,8,6,9,1,5,6,4,3};
    int n=9;
    merge_sort(arr,0,n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
   
}