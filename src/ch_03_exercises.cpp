#include "create_vector.h"
#include <algorithm> // adds the sort function
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::find;
using std::sort;
using std::vector;

// 3-0 compile, execute and test the programs in this chapter

// 3-1 suppose we wish to find the median of a collection of values. assume that
// we have read some of the values so far and that we have no idea how many
// values remain to be read. Prove that we cannot afford to discard any of the
// values that we have read. Hint: One proof strategy is to assume that we can
// discard a value, and then find values for the unread – and therefore unknown–
// part of our collection that would cause the median to be the value we
// discarded.

// We want to find the median in a list of numbers. Suppose, we can discard a
// value.
//
// - We read a few values and discard them [15, 25, 30, 36]
// - We read more values until the list is gone (let's assume it's an odd number
// of values) [10, 20, 21, 45, 35, 40, 41]
// - We sort the list
// - We identify the middle value in the list by dividing the length by two and
// selecting the value at that index. The value is 35.
// - The length of the remaining values does not include the length of the
// discarded list, therefore the middle value - the median - is not the true
// middle of the list and not the true median.
// - When the lists are combined [10, 15, 20, 21, 25, 30, 35, 36, 40, 41, 45] we
// see that the true middle value is 30 a value from the discarded list

typedef vector<unsigned>::size_type vec_sz;

int median(vector<unsigned> &values) {
  int mid = values.size() / 2;
  return values.size() % 2 == 0 ? (values[mid] + values[mid - 1]) / 2
                                : values[mid / 2];
}

// 3-2 write a program to compute and print the quartiles (that is the quarter
// of the numbers with the largest values, the next highest quarter, and so
// on) of a set of integers
void three_two() {
  vector<unsigned> full;
  fill_random_length(full, 80);
  sort(full.begin(), full.end());
  print_vector(full);

  int size = full.size();

  int firstQuart = size - (size / 4); // 60
  int secondQuart = size / 2;         // 40
  int thirdQuart = size / 4;          // 20;

  cout << "first quarter: ";
  for (int i = firstQuart; i != size; i++) {
    cout << full[i] << ' ';
  }

  cout << endl << "second quarter: ";
  for (int i = secondQuart; i != firstQuart; i++) {
    cout << full[i] << ' ';
  }

  cout << endl << "third quarter: ";
  for (int i = thirdQuart; i != secondQuart; i++) {
    cout << full[i] << ' ';
  }

  cout << endl << "fourth quarter: ";
  for (int i = 0; i != thirdQuart; i++) {
    cout << full[i] << ' ';
  }

  // this is a maze of continues (hard to understand and complex math)
  //   while (count >= 0) {
  //     if (count > firstQuart && count <= size) {
  //       // 79
  //       if (count == size - 1) {
  //         // cout << endl << "Count: " << count;
  //         cout << endl;
  //         cout << "first quarter: ";
  //       }
  //       cout << full[count] << ' ';
  //       count--;
  //       continue;
  //     }
  //     // 59
  //     if (count >= secondQuart && count <= firstQuart) {
  //       if (count == firstQuart - 1) {
  //         // cout << endl << "Count: " << count;
  //         cout << endl;
  //         cout << "second quarter: ";
  //       }
  //       cout << full[count] << ' ';
  //       count--;
  //       continue;
  //     }

  //     // 39
  //     if (count >= thirdQuart && count <= secondQuart) {
  //       if (count == secondQuart - 1) {
  //         // cout << endl << "Count: " << count;
  //         cout << endl;
  //         cout << "third quarter: ";
  //       }
  //       cout << full[count] << ' ';
  //       count--;
  //       continue;
  //     }

  //     // 19
  //     if (count >= 0 && count <= thirdQuart) {
  //       if (count == thirdQuart - 1) {
  //         cout << endl;
  //         cout << "fourth quarter: ";
  //       }
  //       cout << full[count] << ' ';
  //     }

  //     count--;
  //   };
}

void threeThree() {
  // write a program to count how many times each distinct word appears in its
  // input
}

void threeFour() {
  // write a program to report the length of the longest and shortest string in
  // its input
}

void threeFive() {
  // write a program that will keep track of grades for several students at
  // once. The program could keep two vectors in sync: the first should hold the
  // students names and the second the final grades that can be computed as
  // input is read. For now, you should assume a fixed number of homework
  // grades.
}

void threeSix() {
  // the average grade computation in chapter three might divide by zero if the
  // student didn't enter any grades. Division by zero is undefined in c++ which
  // means that the implementation is permitted to do anything it likes. what
  // does your c++ implementation do in this case? Rewrite the program so that
  // its behavior does not depend on how the implementation treats division by
  // zero
}

int main() {
  three_two();
  return 0;
}