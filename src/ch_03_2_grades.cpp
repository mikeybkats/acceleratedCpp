// 3.2 - storing the data in a vector

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;

int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout << "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  cout << "Enter all your homework grades, " // string literals seperated only
                                             // by whitespace are
          "followed by end-of-file: ";       // automatically concatenated

  //   int count = 0; // don't need to count anymore because the vector tracks
  //   size

  double sum = 0;
  double x; // without assigning a value, x gets the default initialization of
            // undefined (determined by type). It is illegal to do anything with
            // an uninitialized variable.
  vector<double> homework;
  // vector is defined using the language feature
  // "template classes"
  // this vector holds doubles

  // invariant: we have read count grades so far and sum is the sum of the first
  while (cin >> x) {
    homework.push_back(x);
    // ++count; // don't need to count anymore because the vector tracks size
    sum += x;
  }

  // write the result
  // cout.precision - the total number of significant digits
  streamsize prec = cout.precision(); // returns the current precision
  cout << "Your final grade is " << setprecision(3)
       << 0.2 * midterm + 0.4 * final + 0.4 * sum / homework.size()
       << setprecision(prec) << endl;

  return 0;
}