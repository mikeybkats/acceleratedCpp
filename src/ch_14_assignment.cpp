// =============================================================================
// Chapter 14 Assignment: Managing Memory (Almost) Automatically
// Accelerated C++ — Managing memory (almost) automatically (14.1–14.5)
// =============================================================================
//
// GOAL
// Implement a reference-counted Handle (Ptr) class so copies share underlying
// data until one copy is modified — then implement copy-on-write.
//
// REQUIREMENTS
// 1. Define a class Ptr that manages a std::string on the free store using
//    reference counting. Internally maintain a structure like:
//      struct StringRep {
//          std::size_t ref_count;
//          std::string data;
//      };
//      StringRep* rep;
// 2. Provide:
//      - Default constructor (empty string, ref_count = 1)
//      - Constructor from const std::string&
//      - Copy constructor and copy assignment (increment ref_count, share rep)
//      - Destructor (decrement ref_count; delete rep when it reaches 0)
//      - const std::string& get() const  (read-only access)
//      - std::string& mutable_ref()      (copy-on-write: if ref_count > 1,
//        duplicate rep before returning a mutable reference)
// 3. In main(), demonstrate:
//      a) Ptr a("hello"); Ptr b = a; — show they share data (same address)
//      b) Reading through b does not copy
//      c) Calling mutable_ref() on b after sharing creates a unique copy;
//         modifying b no longer affects a
//      d) Print addresses or contents to prove each step
// 4. No memory leaks when Ptr objects go out of scope in any order.
//
// BONUS
// - Generalize Ptr to a template RefPtr<T> with the same semantics.
// - Add a use_count() const member that returns the current reference count.
// - Implement operator<< for Ptr.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_14_assignment
//   ./build/bin/ch_14_assignment
// =============================================================================

int main() { return 0; }
