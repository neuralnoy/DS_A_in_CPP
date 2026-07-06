// Give a C++ code fragment for randomly permuting an array.
#include <array>
#include <iostream>
#include <random>   // for random number generation
#include <utility>  // for std::swap

int RandomInt(int max) {
    static std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(0, max);
    return dist(rng);
}

void RandomPermutator(std::array<int, 16>& arr) {
    for (size_t i = arr.size() - 1; i > 0; i--) {
        int rand_idx = RandomInt(i);
        std::swap(arr[i], arr[rand_idx]);
    }
}

int main() {
    std::array<int, 16> arr;
    for (size_t i = 0; i < arr.size(); i++) {
        arr[i] = i + 1;
    }

    std::cout << "Before shuffling:\n";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    RandomPermutator(arr);

    std::cout << "After shuffling:\n";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
