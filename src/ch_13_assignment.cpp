// =============================================================================
// Chapter 13 Assignment: Using Inheritance and Dynamic Binding
// Accelerated C++ — Using inheritance and dynamic binding (13.1–13.7)
// =============================================================================
//
// GOAL
// Model a small polymorphic shape hierarchy with virtual functions and a
// simple Handle class that owns polymorphic objects safely.
//
// REQUIREMENTS
// 1. Define an abstract base class Shape with:
//      - virtual ~Shape()
//      - pure virtual double area() const
//      - pure virtual void draw(std::ostream&) const
//      - virtual std::string name() const  (return a type label)
// 2. Derive at least three concrete classes: Circle, Rectangle, Triangle.
//    Each must implement area() and draw(). draw() should print an ASCII
//    representation (does not need to be geometrically accurate).
// 3. Write a non-member function:
//      double total_area(const std::vector<Shape*>&);
//    that uses polymorphism to sum areas.
// 4. Implement a Handle class that:
//      - Owns a Shape* allocated with new
//      - Has constructor Handle(Shape* p) that takes ownership
//      - Deletes the pointer in its destructor
//      - Supports copy via clone(): the copy constructor calls p->clone()
//        (add virtual Shape* clone() const to the hierarchy)
//      - Provides forwarding functions area() and draw() that delegate to *p
// 5. main() should:
//      - Create several Shape objects on the heap
//      - Store them in std::vector<Handle>
//      - Copy the vector (proving deep polymorphic copy works)
//      - Print each shape's name, area, and ASCII drawing
//
// BONUS
// - Add a ColoredShape decorator class that wraps another Shape and adds a
//   color label to draw() output.
// - Use dynamic_cast to count how many shapes in a vector are Circles.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_13_assignment
//   ./build/bin/ch_13_assignment
// =============================================================================
