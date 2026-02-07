#include <iostream>
#include <vector>
#include <utility> // for std::pair<int, int>

std::pair<int, int> FindMinMax(const std::vector<int>& sequence) {
    int size = sequence.size();
    int minimum = sequence[0];
    int maximum = sequence[0];
    for (size_t i = 1; i < size; i++) {
        if (sequence[i] < minimum) {
            minimum = sequence[i];
        }
        if (sequence[i] > maximum) {
            maximum = sequence[i];
        }
    }
    return {minimum, maximum};
}

// Optimized approach which reduces the the constant factor of the complexity, still O(n)
std::pair<int, int> PairwiseOptimalMinMax(const std::vector<int>& sequence) {
    int size = sequence.size();
    int minimum, maximum;
    int i = 0;

    // Initialize min and max
    if (size % 2 == 0) {
        if (sequence[0] < sequence[1]) {
            minimum = sequence[0];
            maximum = sequence[1];
        } else {
            minimum = sequence[1];
            maximum = sequence[0];
        }
        i = 2;
    } else {
        minimum = maximum = sequence[0];
        i = 1;
    }

    // Process elements in pairs
    for (; i < size - 1; i += 2) {
        int localMin, localMax;

        if (sequence[i] < sequence[i + 1]) {
            localMin = sequence[i];
            localMax = sequence[i + 1];
        } else {
            localMin = sequence[i + 1];
            localMax = sequence[i];
        }

        if (localMin < minimum) {
            minimum = localMin;
        }
        if (localMax > maximum) {
            maximum = localMax;
        }
    }

    return {minimum, maximum};
}

int main() {
    const std::vector<int> sequence{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	std::cout << "Computing with standard approach..." << "\n";
    auto result = FindMinMax(sequence);
    std::cout << "Minimum: " << result.first
              << "\nMaximum: " << result.second << std::endl;
	std::cout << "Computing with optimized approach..." << "\n";
	auto result_1 = PairwiseOptimalMinMax(sequence);
    std::cout << "Minimum: " << result_1.first
              << "\nMaximum: " << result_1.second << std::endl;
}