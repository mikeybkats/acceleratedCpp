// =============================================================================
// Chapter 6 Assignment: Using Library Algorithms
// Accelerated C++ — Using library algorithms (6.1–6.5)
// =============================================================================
//
// GOAL
// Rewrite classification and analysis logic using <algorithm> instead of
// hand-written loops.
//
// REQUIREMENTS
// 1. Reuse (or redefine) Student_info from Chapter 5 with name, midterm,
//    final, and homework grades.
// 2. Implement a function to compute a student's course grade using the
//    book's formula:
//      - 0.2 * midterm + 0.4 * final + 0.4 * homework average
//      - If there are no homework grades, treat homework average as 0.
// 3. Read a vector of Student_info from std::cin.
// 4. Using std::sort and a custom comparison, sort students by ascending
//    course grade.
// 5. Using std::partition (or stable_partition), separate students into
//    "passing" (grade >= 60) and "failing" (< 60) while preserving relative
//    order within each group as much as your chosen algorithm allows.
// 6. Print a formatted table with columns: Name, Midterm, Final, HW avg, Grade.
// 7. Do NOT use index-based for loops for sorting or partitioning — use
//    algorithms and iterators.
//
// BONUS
// - Use std::accumulate (from <numeric>) for homework averages.
// - Use std::find_if to locate the first student with a perfect final exam.
// - Compare two grading schemes (e.g. median-based vs average-based homework)
//   and print which scheme is more lenient for the class.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_06_assignment
//   ./build/bin/ch_06_assignment
// =============================================================================

int main() { return 0; }
