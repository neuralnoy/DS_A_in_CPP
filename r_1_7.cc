// R-1.7 Write a short C++ function that takes an integer n and returns the sum of all the integers smaller than n.

#include <iostream>

int loopSumOfIntegersSmallerThanN(int const n) {
    if (n <= 1) return 0;  // no positive integers smaller than 1
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += i;
    }
    return sum;
}

int formulaSumOfIntegersSmallerThanN(int const n) {
    if (n <= 1) return 0;
    return ((n - 1) * n) / 2;
}



int main() {
    std::cout << "loop sum of n = 5 is: " << loopSumOfIntegersSmallerThanN(5) << std::endl;
    std::cout << "loop sum of n = 10 is: " << loopSumOfIntegersSmallerThanN(10) << std::endl;
    std::cout << "loop sum of n = 20 is: " << loopSumOfIntegersSmallerThanN(20) << std::endl;
    std::cout << "loop sum of n = 50 is: " << loopSumOfIntegersSmallerThanN(50) << std::endl;
    std::cout << "loop sum of n = 100 is: " << loopSumOfIntegersSmallerThanN(100) << std::endl;
    std::cout << "loop sum of n = -100 is: " << loopSumOfIntegersSmallerThanN(-100) << std::endl;

    std::cout << "formula sum of n = 5 is: " << formulaSumOfIntegersSmallerThanN(5) << std::endl;
    std::cout << "formula sum of n = 10 is: " << formulaSumOfIntegersSmallerThanN(10) << std::endl;
    std::cout << "formula sum of n = 20 is: " << formulaSumOfIntegersSmallerThanN(20) << std::endl;
    std::cout << "formula sum of n = 50 is: " << formulaSumOfIntegersSmallerThanN(50) << std::endl;
    std::cout << "formula sum of n = 100 is: " << formulaSumOfIntegersSmallerThanN(100) << std::endl;
    std::cout << "formula sum of n = -100 is: " << formulaSumOfIntegersSmallerThanN(-100) << std::endl;
}