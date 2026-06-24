#include "create_vector.h"
#include <algorithm> // adds the sort function
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::find;
using std::sort;
using std::string;
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

string program_break = "==============================";

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
  cout << endl;

  cout << program_break << endl;

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

void three_three() {
  // write a program to count how many times each distinct word appears in its
  // input
  vector<string> words = {
      "apricots", "plums",      "peaches",     "oranges",      "strawberries",
      "lemons",   "watermelon", "blueberries", "plums",        "peaches",
      "lemons",   "watermelon", "peaches",     "bananas",      "apples",
      "pears",    "plums",      "apricots",    "strawberries", "oranges",
      "lemons",   "watermelon", "raspberries", "strawberries", "blackberries"};
  sort(words.begin(), words.end());

  vector<string> distinctWords;
  vector<int> counts;

  for (int i = 0; i < words.size(); i++) {
    // scan distinct words to see if it contains the entry
    int j = 0;
    while (j != distinctWords.size() && distinctWords[j] != words[i]) {
      j++;
    }
    // if distnctWords has been fully scanned then the word from "words" has not
    // been found before
    if (j == distinctWords.size()) {
      // word is unique. push it
      distinctWords.push_back(words[i]);
      // add a count
      counts.push_back(1);
    } else {
      // increment the count in the vector
      ++counts[j];
    }
  }

  // sorting here will now break the solution
  // sort(distinctWords.begin(), distinctWords.end());
  for (int i = 0; i < distinctWords.size(); i++) {
    cout << distinctWords[i] << ": " << counts[i] << endl;
  }

  //   // todo: drop this for loop and embed the logic in the upper for loop
  //   for (int i = 0; i < distinctWords.size(); i++) {
  //     int wordCount = 0;
  //     for (int j = 0; j < words.size(); j++) {
  //       if (distinctWords[i] == words[j]) {
  //         wordCount++;
  //       }
  //     }
  //     cout << distinctWords[i] << ":" << wordCount << endl;
  //   }

  cout << program_break << endl;
}

void three_four() {
  // write a program to report the length of the longest and shortest string in
  // its input
  vector<string> words = {"violin",       "cello", "flute",     "guitar",
                          "oboe",         "bongo", "conga",     "synthesizer",
                          "drum machine", "bass",  "xylophone", "piano"};

  string longest = words[0];
  string shortest = words[0];
  for (int i = 0; i < words.size(); i++) {
    if (words[i].size() > longest.size()) {
      longest = words[i];
    }
    if (words[i].size() < shortest.size()) {
      shortest = words[i];
    }
  }
  cout << "longest string: " << longest.size() << endl;
  cout << "shortest string: " << shortest.size() << endl;

  cout << program_break << endl;
}

void three_five() {
  // write a program that will keep track of grades for several students at
  // once. The program could keep two vectors in sync: the first should hold the
  // students names and the second the final grades that can be computed as
  // input is read. For now, you should assume a fixed number of homework
  // grades.
  vector<string> students;
  vector<int> grades;

  cout << "Enter grades. Program ends when student name equals 'end_student'"
       << endl;
  string student;
  while (student != "end_student") {
    cout << "enter student name:";
    cin >> student;
    if (student == "end_student") {
      continue;
    }

    students.push_back(student);

    int grade;
    int sum = 0;
    int count = 0;
    while (count != 5) {
      cout << "Enter the student's homework grades (" << 5 - count << "):";
      cin >> grade;
      sum += grade;
      count++;
    }

    grades.push_back(sum / count);
  }

  cout << "Student Grades" << endl;
  for (int i = 0; i < students.size(); i++) {
    cout << students[i] << ": " << grades[i] << endl;
  }
}

void three_six() {
  // the average grade computation in chapter three might divide by zero if the
  // student didn't enter any grades. Division by zero is undefined in c++ which
  // means that the implementation is permitted to do anything it likes. what
  // does your c++ implementation do in this case? Rewrite the program so that
  // its behavior does not depend on how the implementation treats division by
  // zero
}

int main() {
  //   three_two();
  //   three_three();
  //   three_four();
  three_five();
  return 0;
}