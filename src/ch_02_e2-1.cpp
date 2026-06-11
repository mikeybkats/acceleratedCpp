// 2-1 change framing so that it writes the greeting with no seperation from

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
  const int vPad = 0;
  const int hPad = 0;

  // the number of rows and columns to write
  const int rows = vPad * 2 + 3;
  const string::size_type columns = greeting.size() + hPad * 2 + 2;

  // Write a blank line to seperate the output from the input
  cout << endl;

  // write rows of output
  // invariant: we have written r rows so far
  for (int r = 0; r < rows; r++) {
    // write chars
    // we have written c characters so far in the current row
    string::size_type c = 0;
    while (c != columns) {
      // check to see if it's time to write the greeting
      if (r == vPad + 1 && c == hPad + 1) {
        cout << greeting;
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
  }

  return 0;
}