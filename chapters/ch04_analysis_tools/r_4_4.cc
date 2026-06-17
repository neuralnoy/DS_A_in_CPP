// Draw the recursion trace of the Power algorithm
// which computes the power function p(x,n) for computing p(2,9).
// The betterPowerRecursive() function from previous exercise r_4_3.cc

#include <cassert>
#include <iostream>

/*
 * RECURSION TRACE FOR betterPowerRecursive(2, 9)
 *
 * Execution Flow (O(log n) depth):
 *
 *                  +------------------------------------------------------+
 *                  |  betterPowerRecursive(2, 9)                          |
 *                  |  - n = 9 (odd)                                       |
 *                  |  - Call: betterPowerRecursive(2, 4)                  |
 *                  |  - Return: 2 * y * y = 2 * 16 * 16 = 512             |
 *                  +------------------------------------------------------+
 *                     |                                                ^
 *                     | Call                                           | Return y = 16
 *                     v                                                |
 *                  +------------------------------------------------------+
 *                  |  betterPowerRecursive(2, 4)                          |
 *                  |  - n = 4 (even)                                      |
 *                  |  - Call: betterPowerRecursive(2, 2)                  |
 *                  |  - Return: y * y = 4 * 4 = 16                        |
 *                  +------------------------------------------------------+
 *                     |                                                ^
 *                     | Call                                           | Return y = 4
 *                     v                                                |
 *                  +------------------------------------------------------+
 *                  |  betterPowerRecursive(2, 2)                          |
 *                  |  - n = 2 (even)                                      |
 *                  |  - Call: betterPowerRecursive(2, 1)                  |
 *                  |  - Return: y * y = 2 * 2 = 4                         |
 *                  +------------------------------------------------------+
 *                     |                                                ^
 *                     | Call                                           | Return y = 2
 *                     v                                                |
 *                  +------------------------------------------------------+
 *                  |  betterPowerRecursive(2, 1)                          |
 *                  |  - n = 1 (odd)                                       |
 *                  |  - Call: betterPowerRecursive(2, 0)                  |
 *                  |  - Return: 2 * y * y = 2 * 1 * 1 = 2                 |
 *                  +------------------------------------------------------+
 *                     |                                                ^
 *                     | Call                                           | Return y = 1
 *                     v                                                |
 *                  +------------------------------------------------------+
 *                  |  betterPowerRecursive(2, 0) [Base Case]              |
 *                  |  - n = 0                                             |
 *                  |  - Return: 1                                         |
 *                  +------------------------------------------------------+
 */

// Implementation from r_4_3.cc
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
    std::cout << "Testing betterPowerRecursive(2, 9)..." << std::endl;
    int result = betterPowerRecursive(2, 9);
    std::cout << "Result: " << result << std::endl;
    assert(result == 512);
    std::cout << "Success! Assertion passed." << std::endl;
    return 0;
}
