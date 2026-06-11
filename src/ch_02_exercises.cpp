#include <iostream>
#include <string>

int main() {
  // 2-0 compile and run the program
  // 2-1 change framing so that it writes the greeting with no seperation from
  // 2-2 change the framing so that it uses a different amount of space to
  // seperate the top bottom borders of the greeting frame
  // 2-3 rewrite the program to ask the user to supply the amount of spacing
  // 2-4 change the program so that it writes all the spaces needed in a single
  // output expression
  // 2-5 write a set of characters so they form a square, rectangle and triangle
  // 2-6 what does the following code do?
  int i = 0;
  // loops from 0 - 9
  while (i < 10) {
    // increments i by one
    i += 1;
    // outputs the index
    std::cout << i << std::endl;
  }

  // 2-7 write a program to count down from 10 to -5
  i = 10;
  while (i != -5) {
    i -= 1;
    std::cout << i << std::endl;
  }

  // 2-8 write a program to generate the product of the numbers in the range
  // [1,10]
  i = 1;
  int o = 1;
  while (i <= 10) {
    o = i * o;
    i++;
  }
  std::cout << o << std::endl;

  // 2-9 write a program to ask the user to enter two numbers and tells the user
  // which number is greater
  std::cout << "Enter two different numbers:";
  std::string a, b;
  std::cin >> a >> b;
  std::string greater = " is greater than ";
  if (a > b) {
    std::cout << a + greater + b;
  } else {
    std::cout << b + greater + a;
  }
  std::cout << std::endl;

  return 0;
}