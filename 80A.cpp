#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


// Function to check if a number is prime
bool isPrime(int num) {
    // If the number is less than 2, it's not prime
    if (num <= 1) {
        return false;
    }

    // Check from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
        // If num is divisible by any number from 2 to its square root, it's not prime
        if (num % i == 0) {
            return false;
        }
    }

    // If no divisor is found, the number is prime
    return true;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int n,m;
    cin>>n>>m;

    int answer;
    for (int i = n+1; i <=m; i++)
    {
        if(isPrime(i))
        {
            answer=i;
            break;
        }
    }
    if(answer==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
 
}