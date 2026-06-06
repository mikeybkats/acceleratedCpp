// =============================================================================
// Chapter 8 Assignment: Writing Generic Functions
// Accelerated C++ — Writing generic functions (8.1–8.5)
// =============================================================================
//
// GOAL
// Write function templates that work with different container types via
// iterators, not container-specific code.
//
// REQUIREMENTS
// 1. Implement a function template:
//      template<typename Iter>
//      Iter center(Iter begin, Iter end);
//    that returns an iterator pointing to the center element of a range
//    [begin, end). If the range has an even number of elements, return the
//    iterator to the first of the two center elements (left-biased), matching
//    the book's definition.
// 2. Implement a function template:
//      template<typename T>
//      void print_range(std::ostream&, const T& container);
//    that prints all elements of any sequential container, one per line,
//    using only iterators (range-for is allowed but implement a version with
//    explicit begin/end too).
// 3. Implement a function template:
//      template<typename In, typename Out>
//      Out copy_if(In begin, In end, Out dest, bool (*pred)(const typename In::value_type&));
//    OR use a template type parameter for the predicate instead of a function
//    pointer — either approach is fine. Copy elements satisfying the predicate
//    to dest and return the iterator past the last copied element.
// 4. In main(), demonstrate all three templates with:
//      - std::vector<int>
//      - std::list<std::string>
//      - a built-in array (int arr[] = { ... })
// 5. Use your center template to print the median element of a sorted vector
//    of doubles without knowing the vector's size ahead of time.
//
// BONUS
// - Write a template function reverse_copy that copies a range in reverse
//   order to an output iterator.
// - Write a template is_palindrome that works on any bidirectional container
//   of characters (test with std::string and std::vector<char>).
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_08_assignment
//   ./build/bin/ch_08_assignment
// =============================================================================
