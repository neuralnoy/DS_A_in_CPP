#include <cassert>
#include <iostream>

// Give a C++ description of Algorithm Power for computing the power
// function p(x,n).

// O(n) solution
int powerRecursive(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * powerRecursive(x, n - 1);
}

// Slightly better algorithm
int betterPowerRecursive(int x, int n) {
    // Base case
    int y;
    if (n == 0) return 1;
    // Recursions
    if (n % 2 != 0) {
        y = betterPowerRecursive(x, (n - 1) / 2);
        return x * y * y;
    } else {
        y = betterPowerRecursive(x, n / 2);
        return y * y;
    }
}

int main() {
    // We'll test different bases (x) and exponents (n)
    struct TestCase {
        int x;
        int n;
        int expected;
    };

    TestCase tests[] = {
        {2, 0, 1},      // n = 0 (base case)
        {5, 1, 5},      // n is odd
        {3, 4, 81},     // n is even
        {2, 10, 1024},  // larger even n
        {-2, 3, -8},    // negative base, odd exponent
        {-2, 4, 16}     // negative base, even exponent
    };

    std::cout << "Running power algorithm tests...\n" << std::endl;

    for (const auto& test : tests) {
        int res1 = powerRecursive(test.x, test.n);
        int res2 = betterPowerRecursive(test.x, test.n);

        std::cout << "Testing " << test.x << "^" << test.n << ":\n";
        std::cout << "  powerRecursive:       " << res1 << "\n";
        std::cout << "  betterPowerRecursive: " << res2 << "\n";

        // Assert that both implementations match the expected result
        assert(res1 == test.expected);
        assert(res2 == test.expected);
        std::cout << "  -> PASS\n" << std::endl;
    }

    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
