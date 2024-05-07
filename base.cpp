#include <bits/stdc++.h>
using namespace std;
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
int main()
{   
    file()
    int n;
    cout<<"Input array size: ";
    cin>>n;
    
    int arr[n][n], arr2[n][n], add[n][n], sub[n][n],mul[n][n];
    cout<<"Fill up the first "<<n<<" x "<<n<<" array"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Fill up the second "<<n<<" x "<<n<<" array"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            add[i][j]=arr[i][j]+arr2[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            sub[i][j]=arr[i][j]-arr2[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {   
            int sum=0;
            for (int k = 0; k <n; k++)
            {
                sum+=arr[i][k]*arr2[k][j];
            }
            mul[i][j]=sum;
        }
        
    }
    cout<<"Matrix after Addition: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
           cout<<add[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<"Matrix after Subtraction: "<<endl;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
           cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }   
    cout<<"Matrix after Multiplication: "<<endl;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
           cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}