// =============================================================================
// Chapter 16 Assignment: Where Do We Go From Here?
// Accelerated C++ — Where do we go from here? (16.1–16.2)
// =============================================================================
//
// GOAL
// Build a small capstone program that combines techniques from across the
// book, then write a brief reflection on what you learned and what to study next.
//
// PART A — CAPSTONE PROGRAM
// Write a "Personal Gradebook" program that integrates concepts from Chapters
// 3–9 (and optionally later chapters). Requirements:
//
// 1. Define a Student_info class (Chapter 9) that reads from std::istream.
// 2. Read students from a file if a filename is given on the command line,
//    otherwise from std::cin (Chapter 10).
// 3. Store students in a std::vector and sort by grade using std::sort
//    (Chapter 6).
// 4. Classify students into grade buckets ('A', 'B', 'C', 'D', 'F') using
//    a std::map<char, std::vector<Student_info>> (Chapter 7).
// 5. Print a summary report:
//      - Total students
//      - Class average grade
//      - Count per letter grade
//      - Names of the top 3 students
// 6. Use at least one function template with iterators (Chapter 8).
// 7. Organize code into logical functions — no single 200-line main() (Chapter 4).
//
// PART B — WRITTEN REFLECTION (in comments at the bottom of this file)
// After completing Part A, add a multi-line comment answering:
//   1. Which three concepts from the book were hardest for you, and why?
//   2. Which abstractions (vector, string, map, class, Handle, etc.) saved you
//      the most effort in the capstone?
//   3. What is one C++ topic not covered in this book that you plan to learn
//      next (e.g. smart pointers, move semantics, templates, testing, CMake)?
//   4. If you refactored the capstone again, what would you change?
//
// BONUS
// - Add unit-test-style helper functions that take std::istringstream for input
//   and std::ostringstream for output, so you can test without manual typing.
// - Use your Vec or Str class from Chapters 11–12 somewhere in the project.
// - Generate the report as a framed Picture (Chapter 15) instead of plain text.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_16_assignment
//   ./build/bin/ch_16_assignment grades.txt
// =============================================================================

int main() { return 0; }
