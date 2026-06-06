// =============================================================================
// Chapter 9 Assignment: Defining New Types
// Accelerated C++ — Defining new types (9.1–9.7)
// =============================================================================
//
// GOAL
// Convert the Student_info struct into a proper class with a constructor,
// private data members, and public member functions.
//
// REQUIREMENTS
// 1. Define a class Student_info with:
//      - A default constructor
//      - A constructor that takes std::istream& and reads one student record
//        (name, midterm, final, homework grades) from the stream
//      - Public member functions:
//          std::string name() const;
//          double midterm() const;
//          double final() const;
//          const std::vector<double>& homework() const;
//          bool valid() const;  // true if record was successfully read
//          double grade() const; // course grade using book's formula
//      - Private data members for name, midterm, final, homework
// 2. Non-member functions from earlier chapters (read, compare) should now
//    use the class interface — friends are optional but not required.
// 3. Write a function:
//      std::istream& read_students(std::istream&, std::vector<Student_info>&);
//    that reads Student_info objects until EOF or input failure.
// 4. main() should:
//      - Read all students
//      - Print only valid students in a formatted table with name and grade
//      - Print the class average grade (mean of individual grades)
// 5. Enforce reasonable preconditions: grade() may assume valid() is true.
//
// BONUS
// - Add a static member function Student_info::average_grade(vector) that
//   computes the mean grade for a collection.
// - Overload operator<< to print a Student_info in a readable format.
// - Add a member function letter_grade() that returns 'A' through 'F'.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_09_assignment
//   ./build/bin/ch_09_assignment
// =============================================================================
