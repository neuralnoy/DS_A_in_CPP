// Give a C++ code fragment for reversing an array.

#include <array>
#include <iostream>
#include <utility>

void RevertArray(std::array<int, 16>& some_arr) {
    size_t j = some_arr.size() - 1;
    for (size_t i = 0; i < j; i++) {
        std::swap(some_arr[i], some_arr[j]);
        j--;
    }
}

int main() {
    std::array<int, 16> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    std::cout << "Original array:\n";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n\n";

    RevertArray(arr);

    std::cout << "Reversed array:\n";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}
