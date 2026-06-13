#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;

int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout << "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  cout << "Enter all your homework grades, "
          "followed by end-of-file: ";

  // the number and sum of grades read so far
  int count = 0;
  double sum = 0;

  // a variable to read into
  double x;

  // invariant: we have read count grades so far and sum is the sum of the first
  // count grades
  while (cin >> x) { // read a double from std::cin
    // cin >> x becomes false when the read fails - anything that's not a number
    // will kill the loop
    ++count;
    sum += x;
  }

  // write the result
  // cout.precision - the total number of significant digits
  streamsize prec = cout.precision(); // returns the current precision
  cout << "Your final grade is " << setprecision(3)
       << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec)
       << endl;

  return 0;
}