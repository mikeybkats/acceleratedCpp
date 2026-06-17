// 3.2.2 - storing the data in a vector

#include <algorithm> // adds the sort function
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

  double x; // without assigning a value, x gets the default initialization of
            // undefined (determined by type). It is illegal to do anything with
            // an uninitialized variable.
  vector<double> homework;
  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();

  // invariant: we have read count grades so far and sum is the sum of the first
  while (cin >> x) {
    homework.push_back(x);
  }

  if (size == 0) {
    cout << endl
         << "You must enter your grades.  "
            "please try again."
         << endl;

    return 1;
  }

  sort(homework.begin(), homework.end());
  // begin() denotes the first element in the vector
  // end() denotes one past the last element in the vector

  vec_sz mid = size / 2;
  double median;
  median =
      size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
  // if the mid is even take the average of the two values in the middle of the
  // vector if the mid is odd take the lower middle of the vector

  // write the result
  // cout.precision - the total number of significant digits
  streamsize prec = cout.precision(); // returns the current precision
  cout << "Your final grade is "
       << setprecision(3)
       //    << 0.2 * midterm + 0.4 * final + 0.4 * sum / size <<
       //    setprecision(prec)
       << 0.2 * midterm + 0.4 * final +
              0.4 * median // replaces average with the median. This will allow
                           // us to ignore a students lowest marks so they don't
                           // pull down the homework average
       << setprecision(prec) << endl;

  return 0;
}