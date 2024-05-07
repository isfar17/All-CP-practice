#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number has an odd divisor greater than one
bool hasOddDivisor(long long n) {
    // Remove all factors of 2
    while (n % 2 == 0) {
        n /= 2;
    }
    
    // If the remaining n is 1, then it doesn't have an odd divisor > 1
    if (n == 1) {
        return false;
    }
    
    // Check for odd factors from 3 up to sqrt(n)
    long long limit = (long long)sqrt(n) + 1;
    for (long long i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return true;
        }
    }
    
    // If no odd factors found, check if n itself is odd and greater than 1
    return n > 1;
}

int main() {
    // Read the number of integers to process
    int num_cases;
    cin >> num_cases;
    
    // Iterate through each case
    for (int i = 0; i < num_cases; i++) {
        // Read the integer value
        long long n;
        cin >> n;
        
        // Check if it has an odd divisor greater than one
        if (hasOddDivisor(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
