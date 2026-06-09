// Write a short C++ function that repeatedly selects and removes a random
// entry from an n-element array until the array holds no more entries.
// Assume that you have access to a function random(k), which returns a
// random integer in the range from 0 to k.

#include <iostream>
#include <random>
#include <utility>

int random(int k) {
    if (k <= 0) return 0;
    // Native C++ random engine and device
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, k);
    return distrib(gen);
}

void selectAndRemove(int arr[], int n) {
    // Base Case: Stop when the active size of the array is 0
    if (n <= 0) return;

    // 1. Select a random index from 0 to n - 1
    int idx = random(n - 1);

    // 2. Print (select) the element at the random index
    std::cout << arr[idx] << " ";

    // 3. Swap the selected element with the last active element (at index n - 1)
    std::swap(arr[idx], arr[n - 1]);

    // 4. Recursively call with the remaining n - 1 elements
    selectAndRemove(arr, n - 1);
}

int main() {
    std::cout << "==================================================\n";
    std::cout << "   TESTING SELECT AND REMOVE (RECURSIVE & SWAP)   \n";
    std::cout << "==================================================\n\n";

    // --- TEST 1 ---
    std::cout << "--- Test 1 (Sequential Numbers) ---\n";
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = sizeof(A) / sizeof(A[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < n1; ++i) std::cout << A[i] << " ";
    std::cout << "\n";

    std::cout << "Selection Order: ";
    selectAndRemove(A, n1);
    std::cout << "\n";

    // --- TEST 2 (Running again to see different random results) ---
    std::cout << "--- Test 2 (Same Array, Run 2) ---\n";
    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(B) / sizeof(B[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < n2; ++i) std::cout << B[i] << " ";
    std::cout << "\n";

    std::cout << "Selection Order: ";
    selectAndRemove(B, n2);
    std::cout << "\n";

    // --- TEST 3 (Custom elements) ---
    std::cout << "--- Test 3 (Custom/Unique Elements) ---\n";
    int C[] = {100, 250, 400, 550, 700, 850};
    int n3 = sizeof(C) / sizeof(C[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < n3; ++i) std::cout << C[i] << " ";
    std::cout << "\n";

    std::cout << "Selection Order: ";
    selectAndRemove(C, n3);
    std::cout << "\n";

    std::cout << "==================================================\n";
    return 0;
}
