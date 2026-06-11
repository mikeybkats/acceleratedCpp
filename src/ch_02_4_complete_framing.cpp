// 2-5 write a set of characters so they form a square, rectangle and triangle
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void printRect(int v, int h) {
  // const int size = 8;
  // invariant we have written r rows so far
  for (int r = 0; r < v; r++) {
    int c = 0;
    // invariant we have written c columns so far
    while (c != h) {
      if (r == 0 || r == v - 1) {
        // print top or bottom edge
        cout << "*";
      } else {
        if (c == 0 || c == h - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
      c++;
    }
    cout << endl;
  }
}

void printTriangle(int height, int width) {
  // invariant: we've printed r rows so far
  for (int r = 0; r < height / 2; r++) {
    // invariant: we've printed c cols so far
    for (int c = 0; c < width; c++) {
      if (c == width / 2 + r || c == width / 2 - r) {
        cout << "*";
      } else {
        if (r == height / 2 - 1 && c > 0) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }

    cout << endl;
  }
}

int main() {
  printRect(8, 8);

  printRect(8, 15);

  printTriangle(20, 20);

  return 0;
}