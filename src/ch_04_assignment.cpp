// =============================================================================
// Chapter 4 Assignment: Organizing Programs and Data
// Accelerated C++ — Organizing programs and data (4.1–4.6)
// =============================================================================
//
// GOAL
// Refactor the grading program from Chapter 3 into multiple functions with a
// clear interface — practice separating computation from input/output.
//
// REQUIREMENTS
// Organize your solution across THIS file only, using free functions (no new
// .cpp files yet). Implement and use the following functions:
//
//   // read homework grades from input into vector; returns true if at least
//   // one grade was read
//   bool read_hw(std::istream&, std::vector<double>&);
//
//   double median(std::vector<double>);
//
//   // compute average; precondition: v is not empty
//   double grade_average(const std::vector<double>&);
//
//   // orchestrate reading, computing, and writing results
//   void analyze_grades(std::istream&, std::ostream&);
//
// 1. analyze_grades should:
//      - Read grades via read_hw
//      - Print an error to os if no grades were entered
//      - Otherwise print count, average, and median to os
// 2. main() should do nothing except call analyze_grades(std::cin, std::cout).
// 3. No function other than main should use global variables.
// 4. Pass streams by reference (std::istream&, std::ostream&) so the functions
//    are testable and reusable.
//
// BONUS
// - Add a function write_grade_summary(std::ostream&, const std::vector<double>&)
//   that only handles formatted output.
// - Read grades from a text file if the user provides a filename as a
//   command-line argument (preview of Chapter 10).
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_04_assignment
//   ./build/bin/ch_04_assignment
// =============================================================================
