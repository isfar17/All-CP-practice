// Problem
// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input Format
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

// Output Format
// For each test case, calculate the sum of digits of N, and display it in a new line.

// Constraints

// 1≤ T ≤1000
// 1≤N≤1000000

//input: 12345 output: 15

#include <bits/stdc++.h>
using namespace std;

int main() {
    // since constraint is not very big, we can work with integer
    int t,val;
    cin>>t;
    int sum=0;
    while (t--)
    {   

        cin>>val;
        cout<<endl;

        while(val>0)
        {
            sum+=val%10;
            val/=10;

        }
        
    }
    cout<<sum<<endl;
     
    return 0;
}
/*
Explanation: Here 2 mathematical terms needs to be learned. For example if we want to get the last digit of any number,
we can say thenumber%10. which means it will give the remainder. for example the remainder of 12%10 is 2. and the remainder of
123122%100 is 22. Think about it . 
again if we want to get rid of the last digit of the number we say thenumber/10 times  the digit -1 the number has. for example
if we want to get 10 from of 100, we say 100/10. or if we want to get 123 from 1231263, we say 1231263/10000. and since we are
using integer value, we will get the integer parts only. This is how we keep adding the last digit and get rid of the last digit
and find the sum of the numebr.
*/