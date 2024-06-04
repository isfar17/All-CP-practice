#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mul=1;
    int n , x;
    cin>>n; // we will take the range of the sequence
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>x; //then for each i we will take a number. since cin stop taking input at whitespace, so it will go to next line
        mul*=x; //get the product
    }
    //after the whole loop we will get our product. we need to check if its last digit is equal to 2,3 or 5. So we use remainder
    // to get the last digit. we we want to get rid of the last digit. we do division by 10 then save it as integer.
    if (mul%10 == 2 || mul%10 == 5 || mul%10 == 3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}