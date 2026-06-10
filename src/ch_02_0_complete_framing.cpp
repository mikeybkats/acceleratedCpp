#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  // ask for the person's name
  cout << "Please enter your first name: ";

  // read the name
  string name;
  cin >> name;

  // build the message that we intend to write
  const string greeting = "Hello, " + name + "!";

  // the number of blanks surrounding the greeting
  const int pad = 1;

  // the number of rows and columns to write
  const int rows = pad * 2 + 3; // first and last rows, then three in the middle
  const string::size_type columns = greeting.size() + pad * 2 + 2;

  // Write a blank line to seperate the output from the input
  cout << endl;

  // write rows of output
  // invariant: we have written r rows so far
  for (int r = 0; r < rows; r++) {
    // write chars
    // we have written c characters so far in the current row
    // string.length() returns size_type. so that's why this is used
    // here. c++ was designed for portability. so using size_type can
    // allow the compiler to resolve it correctly for target host
    // int count = 0; this program is wasteful and runs more loops as the length
    // of the name increases.
    string::size_type c = 0;
    while (c != columns) {
      // count++;
      // check to see if it's time to write the greeting
      /*
      | -- | r  | c  | pad + 1 |
      | -- | -- | -- | ---     |
      | 0  | 0  | 0  | 2       |
      |    | 1  |    |         |
      |    |    |    |         |
      |    |    |    |         |
      */
      if (r == pad + 1 && c == pad + 1) {
        // at column 2 and row 2
        // print the greeting
        cout << greeting;
        // skip the cursor over the greeting
        c += greeting.size();
      } else {
        // check to see if the cursor is at the border
        if (r == 0 || r == rows - 1 || c == 0 || c == columns - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
        c++;
      }
    }
    cout << endl;

    // cout << count << endl;
  }

  return 0;
}