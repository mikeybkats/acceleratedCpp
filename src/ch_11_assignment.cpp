// =============================================================================
// Chapter 11 Assignment: Defining Abstract Data Types
// Accelerated C++ — Defining abstract data types (11.1–11.6)
// =============================================================================
//
// GOAL
// Implement a simplified Vec<T> class — a dynamic array abstraction with
// constructors, push_back, operator[], size, and correct copy behavior.
//
// REQUIREMENTS
// 1. Define a class template Vec<T> with:
//      - Default constructor (empty Vec)
//      - Explicit constructor Vec(std::size_t n, const T& val = T())
//      - Copy constructor and copy-assignment operator (deep copy)
//      - Destructor that deallocates all owned memory
//      - void push_back(const T&)
//      - T& operator[](std::size_t n) and const version
//      - std::size_t size() const
// 2. Store elements on the free store using new[] / delete[]. Track:
//      T* data;
//      std::size_t avail;  // number of elements in use
//      std::size_t limit;  // capacity of allocated array
// 3. When push_back runs out of capacity, allocate a new array twice the size,
//    copy elements, delete the old array, and update pointers.
// 4. In main(), demonstrate:
//      - Vec<int> with at least 20 push_back calls (trigger a reallocation)
//      - Vec<std::string> with several string elements
//      - Copy construction: Vec<int> copy = original; modify copy, show that
//        original is unchanged (deep copy proof)
// 5. Do not use std::vector inside Vec — implement the abstraction yourself.
//
// BONUS
// - Add a reserve(std::size_t) member function.
// - Add an iterator type (at minimum: begin() and end() returning T*).
// - Implement Vec<std::string> specialization or helper for stream output.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_11_assignment
//   ./build/bin/ch_11_assignment
// =============================================================================

int main() { return 0; }
