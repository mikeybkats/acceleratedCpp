#include <iostream>
#include <string>

int main() {
  // 1-0
  // compiled and execute the test programs from the chapter

  // 1-1
  std::cout << "1-1" << std::endl;
  const std::string hello = "Hello";
  std::cout << hello + ", world" + "!";

  // 1-2 - are the following expressions valid?
  // const std::string exclaim = "!";
  // const std::string message = "Hello" + ", world" + exclaim;

  // not valid
  // in c++ typed strings are char arrays they are not type
  // std::string . std::string has built in methods that perform
  // the expressions required for joining strings. char[N] arrays
  // are just data, they hav no built in methods.

  // 1-3 is the following program valid? If so, what does it do? If not, why
  // not?
  std::cout << std::endl;
  std::cout << "1-3" << std::endl;
  // inside scopes consts are unique to that scope.
  { // curly braces create a new scope
    const std::string s = "a string";
    std::cout << s << std::endl;
  }

  { // curly braces create a new scope
    const std::string s = "another string";
    std::cout << s << std::endl;
  }

  // 1-4 what about this one?
  // same idea as before. this just makes an inner scope inside the second
  // scope.
  std::cout << "1-4" << std::endl;
  {
    const std::string s = "a string";
    std::cout << s << std::endl;
    {
      const std::string s = "another string";
      std::cout << s << std::endl;
    }
  }

  // 1-5 is this program valid? What does it do? Why, why not?
  std::cout << "1-5" << std::endl;
  //   {
  //     std::string s = "a string";
  //     {
  //       std::string x = s + ", really";
  //       std::cout << s << std::endl;
  //     }
  //     std::cout << x << std::endl; // not valid because x is not in scope.
  //   }

  {
    std::string s = "a string";
    {
      std::string x = s + ", really";
      std::cout << s << std::endl;
      std::cout << x << std::endl; // fix it by moving x into scope here.
    }
  }

  // 1 - 6 What does the following program do? Predict the behavior before
  // running it.
  std::cout << "1-6" << std::endl;

  // this program is supposed to print a short interactive conversation between
  // two different people, but it's broken
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name; // saves to a non const type, i think this is okay.

  std::cout << "Hello, " << name << std::endl
            << "And what is yours? "; // this will fail (i think). I don't think
                                      // you can just pipe chars into std::endl
                                      // they need an additional cout statement
                                      // to print the "and what is yours?"
  std::cin >> name; // this redefines name, which i think is fine
  std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;

  // i ran the program, i'm shocked that this actually worked.
  // the reason it worked is because `<<` always returns the stream regardless
  // of what the right-hand operand is. so std::endl << "And what is yours?";
  // will still return std::cout

  return 0;
}