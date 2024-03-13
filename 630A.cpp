#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    // Calculate 5^n % 100 (last two digits)
    int result = 1;
    int base = 5;
    int mod = 100;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        n /= 2;
    }

    std::cout << result << std::endl;

    return 0;
}
