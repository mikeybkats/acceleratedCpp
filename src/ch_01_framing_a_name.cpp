// ask for a person's name and generate a framed greeting
#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  // build the message that we want to write
  const std::string greeting = "Hello, " + name + "!";

  // build the second and fourth lines of the output
  const std::string spaces(
      greeting.size(),
      ' '); // The parentheses indicate that we are to 'construct'
            // variable from the expressions: size and ' '
            // What does it mean to construct a string from two expressions? The
            // constructor depends on its type (every type has its own
            // contract).
  const std::string second = "* " + spaces + " *";

  // build the first and fifth lines of the output
  const std::string first(second.size(), '*');

  // write it all
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}