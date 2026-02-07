// Write a pseudocode description of a method for finding the smallest and
// largest numbers in an array of integers and compare that to a C++ function
// that would do the same thing.

// Pseudocode
//
// min = max = Sequence[0]
// for i from 1 to length of Sequence - 1
//     if Sequence[i] < min then min = Sequence[i]
//     if Sequence[i] > max then max = Sequence[i]
//
// return min and max

#include <iostream>
#include <utility> // for pair type: std::pair<int, int>


std::pair<int, int> findMinMax(const int* sequence, const int size) {
    int minimum = sequence[0];
    int maximum = sequence[0];
    for (int i = 0; i < size; i++) {
        if (sequence[i] < minimum) {
            minimum = sequence[i];
        }
        if (sequence[i] > maximum) {
            maximum = sequence[i];
        }
    }
    std::cout << "Minimum number is: " << minimum << std::endl << "Maximum number is: " << maximum << std::endl;
    return {minimum, maximum};
}

int main() {
    int const sequence[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    findMinMax(sequence, 15);
}