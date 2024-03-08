#include <bits/stdc++.h>
using namespace std;

int main() {

    long int input,sum=0;
    int two_power=1;
    cin>>input;
    if (input==0)
    {
        cout<<0;
        return 0;
    }

    int last_digit;
    while (input!=0)
    {
        last_digit=input%10;
        sum+=(last_digit*two_power);
        two_power*=2;
        input=input/10;
        
    }
    cout<<sum;
    return 0;
}