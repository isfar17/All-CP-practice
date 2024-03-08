#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr1[n],arr2[n];
         for (int i = 0; i < n; i++)
         {
            cin>>arr1[i];
         }
         for (int j = 0; j < n; j++)
         {
            cin>>arr2 [j];
         }
         int longest1=0;
         for (int i = 0; i < n; i++)
         {  

            if (arr1[i]==0)
                {
                    longest1=0;
                    continue;
                }
                else
                {

                    longest1++;
                }

         }
         int longest2=0;
         for (int i = 0; i < n; i++)
         {  

            if (arr2[i]==0)
                {
                    longest2=0;
                    continue;
                }
                else
                {

                    longest2++;
                }

         }
         
    if (longest1>longest2)
    {
        cout<<"Om";
    }
    else if(longest2>longest1){
        cout<<"Addy";
    }
    else{
        cout<<"Draw";
    }
    }
    
    return 0;
}