#include "create_vector.h"
#include <random>

#include <iostream>

void fill_random_length(vector<unsigned> &values, int n) {
  std::random_device rd;
  std::mt19937 gen(rd());

  // create a value dist
  std::uniform_int_distribution<unsigned> value_dist(0, 100);

  values.clear();
  values.reserve(n);

  for (vec_sz i = 0; i != n; i++) {
    // generate the random value and push it to the vector
    values.push_back(value_dist(gen));
  }
}

void print_vector(vector<unsigned int> &values) {
  int count = 0;
  std::cout << "[";
  while (count != values.size()) {
    std::cout << values[count] << ' ';
    count++;
  }
  std::cout << "]";
  std::cout << std::endl;
}