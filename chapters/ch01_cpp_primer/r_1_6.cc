// R-1.6 Consider the following attempt to allocate a 10-element array of
// pointers to doubles and initialize the associated double values to 0.0.
// Rewrite the following (incorrect) code to do this correctly. (Hint: Storage
// for the doubles needs to be allocated.) double* dp[10] for (int i = 0; i <
// 10; i++) dp[i] = 0.0;

int main() {
  double *dp[10]; // Declare an array of 10 pointers to double

  for (int i = 0; i < 10; i++) { // Loop through each index from 0 to 9
    dp[i] = new double; // Allocate memory for a double and store its address in
                        // dp[i]
    *dp[i] = 0.0; // Initialize the allocated double to 0.0 (dereference it)
  }

  for (int i = 0; i < 10; i++) { // Loop through each index again from 0 to 9
    delete dp[i]; // Free the dynamically allocated memory at dp[i] (for memory
                  // safety)
  }

  return 0; // Indicate successful execution
}
