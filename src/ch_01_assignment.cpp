// =============================================================================
// Chapter 1 Assignment: Working with Strings
// Accelerated C++ — Working with strings (1.1–1.3)
// =============================================================================
//
// GOAL
// Practice reading from std::cin, storing data in std::string, and building
// new strings by concatenation — then present the result in a framed box.
//
// REQUIREMENTS
// 1. Ask the user for three pieces of information:
//      - First name
//      - Favorite programming language (or "none yet")
//      - A one-word hobby
// 2. Build a single greeting string that uses all three answers, e.g.
//      "Hello, Alex! You like Rust and hiking."
// 3. Print the greeting inside a rectangular frame of asterisks (*), similar
//    to the "framing a name" program from the chapter. The top and bottom rows
//    should be all asterisks; the sides should have asterisks with the greeting
//    centered on one line.
// 4. Use const std::string where the value will not change after creation.
// 5. Use the std::string(size, char) constructor to build rows of spaces or
//    asterisks — do not hard-code long strings of spaces.
//
// EXAMPLE OUTPUT (user input: Alex, Rust, hiking)
//   ***********************
//   *                     *
//   * Hello, Alex! You like Rust and hiking. *
//   *                     *
//   ***********************
//
// BONUS
// - Ask for a second hobby and incorporate both into the greeting.
// - Make the frame one character wider than the minimum required on each side.
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_01_assignment
//   ./build/bin/ch_01_assignment
// =============================================================================

#include <iostream>
#include <ostream>
#include <string>

int main() {
  std::cout << "Name?" << std::endl;
  std::string name;
  std::cin >> name;

  std::cout << "Favorite Programming language?" << std::endl;
  std::string language;
  std::cin >> language;

  std::cout << "Favorite hobby (one word)?" << std::endl;
  std::string hobby;
  std::cin >> hobby;

  std::string greeting =
      "Hello " + name + "! You like " + language + " and " + hobby + ".";
  int length = greeting.length() + 2;

  std::string first(length + 2, '*');
  std::string second(length, ' ');
  std::string middle = "* " + greeting + " *";

  std::cout << first << std::endl;
  std::cout << "*" + second + "*" << std::endl;
  std::cout << middle << std::endl;
  std::cout << "*" + second + "*" << std::endl;
  std::cout << first << std::endl;

  return 0;
}
