// =============================================================================
// Chapter 3 Assignment: Working with Batches of Data
// Accelerated C++ — Working with batches of data (3.1–3.3)
// =============================================================================
//
// GOAL
// Read an unknown number of homework grades, compute statistics, and report
// whether the student met a performance threshold — using vectors and grades
// as doubles.
//
// REQUIREMENTS
// 1. Prompt the user to enter homework grades one per line. Stop reading when
//    the user enters a blank line (or "end" — choose one approach and document
//    it in a comment).
// 2. If no grades were entered, print an error message and exit with a
//    non-zero return value.
// 3. Compute and print:
//      - The number of grades
//      - The average (arithmetic mean)
//      - The median
// 4. Ask the user for a target grade (double). Print whether the student's
//    median meets or exceeds the target.
// 5. Implement a helper function:
//      double median(std::vector<double>);
//    that returns the median of the vector. You may assume the vector is
//    non-empty when this function is called.
// 6. Keep all code in this single file for now (Chapter 4 will refactor).
//
// HINTS
// - Sort a copy of the vector to find the median.
// - Use push_back to grow the vector as grades arrive.
// - Separate input, computation, and output into logical sections of main().
//
// BONUS
// - Also report the lowest and highest grade.
// - Handle the case where the user enters non-numeric input gracefully.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_03_assignment
//   ./build/bin/ch_03_assignment
// =============================================================================

int main() { return 0; }
