# Accelerated C++

Chapter exercises and assignments for working through *Accelerated C++* by Koenig and Moo.

## Build & Run

```bash
make
./build/bin/ch_00_hello_world
```

Build a single exercise or assignment:

```bash
make build/bin/ch_01_assignment
./build/bin/ch_01_assignment
```

Assignment files (`src/ch_*_assignment.cpp`) are excluded from the default `make` target until you add your code. Open each file for full instructions in the comments.

## Chapter Assignments

| File | Chapter | Topic |
|------|---------|-------|
| [`src/ch_00_assignment.cpp`](src/ch_00_assignment.cpp) | 0 — Getting started | Hello-world style intro program |
| [`src/ch_01_assignment.cpp`](src/ch_01_assignment.cpp) | 1 — Working with strings | String input + framed greeting |
| [`src/ch_02_assignment.cpp`](src/ch_02_assignment.cpp) | 2 — Looping and counting | Loops, variable-height frames, counting |
| [`src/ch_03_assignment.cpp`](src/ch_03_assignment.cpp) | 3 — Working with batches of data | Vectors, grades, average & median |
| [`src/ch_04_assignment.cpp`](src/ch_04_assignment.cpp) | 4 — Organizing programs and data | Refactor into functions with stream params |
| [`src/ch_05_assignment.cpp`](src/ch_05_assignment.cpp) | 5 — Sequential containers and analyzing strings | `Student_info`, `split`, iterators |
| [`src/ch_06_assignment.cpp`](src/ch_06_assignment.cpp) | 6 — Using library algorithms | `<algorithm>`, sort & partition |
| [`src/ch_07_assignment.cpp`](src/ch_07_assignment.cpp) | 7 — Using associative containers | `std::map` word counts & cross-reference |
| [`src/ch_08_assignment.cpp`](src/ch_08_assignment.cpp) | 8 — Writing generic functions | Function templates & iterators |
| [`src/ch_09_assignment.cpp`](src/ch_09_assignment.cpp) | 9 — Defining new types | `Student_info` as a proper class |
| [`src/ch_10_assignment.cpp`](src/ch_10_assignment.cpp) | 10 — Managing memory and low-level data structures | Pointers, `argc`/`argv`, file I/O |
| [`src/ch_11_assignment.cpp`](src/ch_11_assignment.cpp) | 11 — Defining abstract data types | `Vec<T>` with dynamic memory |
| [`src/ch_12_assignment.cpp`](src/ch_12_assignment.cpp) | 12 — Making class objects act like values | `Str` class, Rule of Three, conversions |
| [`src/ch_13_assignment.cpp`](src/ch_13_assignment.cpp) | 13 — Using inheritance and dynamic binding | Inheritance, virtual functions, Handle |
| [`src/ch_14_assignment.cpp`](src/ch_14_assignment.cpp) | 14 — Managing memory (almost) automatically | Reference counting & copy-on-write |
| [`src/ch_15_assignment.cpp`](src/ch_15_assignment.cpp) | 15 — Revisiting character pictures | Character `Picture` composition |
| [`src/ch_16_assignment.cpp`](src/ch_16_assignment.cpp) | 16 — Where do we go from here? | Capstone gradebook + reflection |
