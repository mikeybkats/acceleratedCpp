// =============================================================================
// Chapter 12 Assignment: Making Class Objects Act Like Values
// Accelerated C++ — Making class objects act like values (12.1–12.7)
// =============================================================================
//
// GOAL
// Implement a simple Str class that manages its own character data and
// supports value-like copying, concatenation, and cautious conversions.
//
// REQUIREMENTS
// 1. Define a class Str that owns a null-terminated char array on the free
//    store. Provide:
//      - Default constructor (empty string)
//      - Constructor from const char*
//      - Copy constructor, copy assignment, destructor (Rule of Three)
//      - const char* c_str() const
//      - std::size_t size() const
//      - operator+= for appending another Str or a const char*
//      - Non-member operator+ that returns a new Str
//      - operator<< for std::ostream&
//      - operator>> for std::istream& (read one whitespace-delimited word)
// 2. Do NOT use std::string inside Str — manage char[] directly.
// 3. Provide an explicit constructor from int that creates a string of that
//    many '*' characters (e.g. Str(5) is "*****"). Mark it explicit so
//    accidental conversions do not compile.
// 4. In main(), demonstrate:
//      - Creating, copying, and assigning Str objects
//      - Concatenation and stream I/O
//      - That Str(3) + Str("hi") works but implicit int-to-Str in "hi" + 3
//        does NOT compile (add a comment showing the rejected line)
// 5. Document in a comment which operations allocate new memory and why.
//
// BONUS
// - Add operator[] with bounds checking (throw or assert on out of range).
// - Implement an implicit conversion to bool that returns true if non-empty
//   (show why this can be hazardous with an example in comments).
// - Add a substr(std::size_t pos, std::size_t len) member function.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_12_assignment
//   ./build/bin/ch_12_assignment
// =============================================================================

int main() { return 0; }
