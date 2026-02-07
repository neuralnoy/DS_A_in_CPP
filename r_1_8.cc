// R-1.8 Write a short C++ function, isMultiple, that takes two positive long values,
// n and m, and returns true if and only if n is a multiple of m, that is, n = mi for some integer i.

#include <iostream>

bool isMultiple(const long n, const long m) {
    if (n % m == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool shorterIsMultiple(const long n, const long m) {
    return n % m == 0;
}

int main() {
    std::cout << "is multiple of 3 and 5 is: " << isMultiple(3, 5) << std::endl;
    std::cout << "is multiple of 15 and 5 is: " << isMultiple(15, 5) << std::endl;
    std::cout << "is multiple of 3 and 5 is: " << shorterIsMultiple(3, 5) << std::endl;
    std::cout << "is multiple of 15 and 5 is: " << shorterIsMultiple(15, 5) << std::endl;
    return 0;
}