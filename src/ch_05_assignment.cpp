// =============================================================================
// Chapter 5 Assignment: Sequential Containers and Analyzing Strings
// Accelerated C++ — Using sequential containers and analyzing strings (5.1–5.9)
// =============================================================================
//
// GOAL
// Store student records, partition them by performance using iterators, and
// implement a function to split strings on whitespace.
//
// REQUIREMENTS
// 1. Define a struct Student_info with fields:
//      std::string name;
//      double midterm;
//      double final;
//      std::vector<double> homework;
// 2. Write a function to read Student_info records from an istream until EOF or
//    end of data. Each record has: name, midterm grade, final grade, then
//    homework grades until the next name or EOF.
// 3. Implement:
//      std::vector<std::string> split(const std::string&);
//    that returns a vector of whitespace-separated words from the input string.
//    Treat any whitespace (space, tab, newline) as a separator.
// 4. Write a function that classifies students into two vectors:
//      - did:   students who completed all homework and have hw average >= 60
//      - fail:  everyone else
//    Use iterators (not indices) to copy elements into the result vectors.
// 5. main() should:
//      - Read all students from std::cin
//      - Classify them
//      - Print the names in each category with a header
//
// BONUS
// - Implement split using only iterator operations (no index-based loops).
// - Add a third category for students who passed exams but missed homework.
// - Store names in a std::list<std::string> for one of the output lists and
//   print using iterators.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_05_assignment
//   ./build/bin/ch_05_assignment
// =============================================================================

int main() { return 0; }
