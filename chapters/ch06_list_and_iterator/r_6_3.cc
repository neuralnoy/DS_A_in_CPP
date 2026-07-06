// Give a C++ code fragment for circularly rotating an array by distance d.
#include <iostream>
#include <utility>  // for std::swap
#include <vector>

using std::vector;

// helper to revert the array
void RevertArray(vector<int>& some_vec, int start, int end) {
    for (int i = start; i < end; i++) {
        std::swap(some_vec[i], some_vec[end]);
        end--;
    }
}

// helper to print a vector
void PrintVector(const vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void CircularRotation(vector<int>& vec, int distance, bool left_rot = true) {
    if (vec.empty()) {
        return;
    }
    if (left_rot != true) {
        distance = vec.size() - distance;
    }
    // normalize d (in case d > n)
    distance = distance % vec.size();
    RevertArray(vec, 0, distance - 1);
    RevertArray(vec, distance, vec.size() - 1);
    RevertArray(vec, 0, vec.size() - 1);
}

int main() {
    // Test Case 1: Left Rotation by 2 (distance = 2, left_rot = true)
    {
        vector<int> vec = {1, 2, 3, 4, 5};
        std::cout << "--- Test Case 1 (Left Rotation by 2) ---\n";
        std::cout << "Original: ";
        PrintVector(vec);
        CircularRotation(vec, 2, true);
        std::cout << "Rotated:  ";
        PrintVector(vec);  // Expected: 3 4 5 1 2
        std::cout << "\n";
    }

    // Test Case 2: Right Rotation by 2 (distance = 2, left_rot = false)
    {
        vector<int> vec = {1, 2, 3, 4, 5};
        std::cout << "--- Test Case 2 (Right Rotation by 2) ---\n";
        std::cout << "Original: ";
        PrintVector(vec);
        CircularRotation(vec, 2, false);
        std::cout << "Rotated:  ";
        PrintVector(vec);  // Expected: 4 5 1 2 3
        std::cout << "\n";
    }

    // Test Case 3: Left Rotation by 7 (greater than size 5)
    {
        vector<int> vec = {1, 2, 3, 4, 5};
        std::cout << "--- Test Case 3 (Left Rotation by 7) ---\n";
        std::cout << "Original: ";
        PrintVector(vec);
        CircularRotation(vec, 7, true);  // 7 % 5 = 2 -> Left rotate by 2
        std::cout << "Rotated:  ";
        PrintVector(vec);  // Expected: 3 4 5 1 2
        std::cout << "\n";
    }

    return 0;
}
