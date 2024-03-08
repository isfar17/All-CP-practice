#include <bits/stdc++.h>
using namespace std;

int total(int n)
{
    int sum=0;
    while (n>=1)
    {
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}


int main() 
{

    int t;
    cin>>t; 

    while (t--)
    {
        int sum_total=0;

        int number;
        cin>>number;
        
        for (int i = 1; i <=number; i++)
        {
            int x=total(i);
            sum_total+=x;
        }
        cout<<sum_total<<endl;
    
    }

}