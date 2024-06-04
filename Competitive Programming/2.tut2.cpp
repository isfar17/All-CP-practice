/*
constrains: 
1 <= l <=10^9
1 <= b <=10^9

multiply and print the value of l * b

here most important of competitive program is to look at the constrains, from our problem
we can see that we have a test case which might be 10^9 , so we must use long long int to solve the problem
or else we will get error 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int l,b;
    cin>>l>>b;
    cout<<l*b<<endl;
    //or
    cout<<l*b*1LL<<endl; //converts the current value to long long integer


    return 0;
}