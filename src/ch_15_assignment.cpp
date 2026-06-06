// =============================================================================
// Chapter 15 Assignment: Revisiting Character Pictures
// Accelerated C++ — Revisiting character pictures (15.1–15.3)
// =============================================================================
//
// GOAL
// Design and implement a small Picture library that composes framed text and
// simple shapes from characters — the capstone for the abstraction techniques
// from Part II of the book.
//
// REQUIREMENTS
// 1. Define a Picture class (with Handle-based or polymorphic design — your
//    choice, but document which approach you used and why in a comment).
// 2. Support creating pictures in at least these ways:
//      - Picture frame(const std::string& text)  — framed message
//      - Picture rectangle(int height, int width, char border = '*')
//      - Picture hcat(const Picture&, const Picture&)  — side by side
//      - Picture vcat(const Picture&, const Picture&)  — stacked vertically
// 3. Each Picture must support:
//      - int height() const
//      - int width() const
//      - char get(int row, int col) const  (space for out-of-bounds padding)
//      - void print(std::ostream&) const
// 4. main() should compose a "poster" at least 3 elements wide or tall using
//    hcat/vcat, including one framed title and one rectangular border, and
//    print the result. Example concept:
//        [ framed title ]
//        [ empty box    ]
//        [ framed name  ]
// 5. Separate interface (Picture.h-style declarations in comments at top) from
//    implementation logic. Even in one file, group by role.
//
// BONUS
// - Add Picture center(const Picture&) that pads a picture evenly.
// - Add a scale(int factor) operation that doubles each character cell.
// - Read lines from a file and frame each non-empty line as a Picture column.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_15_assignment
//   ./build/bin/ch_15_assignment
// =============================================================================
