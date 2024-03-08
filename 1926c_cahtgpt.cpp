#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumOfDigitSums(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {

    int t;
    cin>>t; 

    while (t--)
    {
    int n;
    cin>>n;
    int result = sumOfDigitSums(n);
    cout<< result <<endl;
    }
    return 0;
}
