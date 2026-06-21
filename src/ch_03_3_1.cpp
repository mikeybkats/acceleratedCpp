#include <algorithm> // adds the sort function
#include <iostream>
#include <random>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::find;
using std::sort;
using std::vector;

typedef vector<unsigned>::size_type vec_sz;

void fill_random(vector<unsigned> &values) {
  std::random_device rd;
  std::mt19937 gen(rd());

  // create the "random" number of elements
  std::uniform_int_distribution<unsigned> size_dist(
      20, 50); // random size at least 20, up to 50
  vec_sz count = size_dist(gen);

  // create a value dist
  std::uniform_int_distribution<unsigned> value_dist(50, 100);

  values.clear();
  values.reserve(count);

  for (vec_sz i = 0; i != count; i++) {
    // generate the random value and push it to the vector
    values.push_back(value_dist(gen));
  }
}

void threeOne() {
  // prove that we cannot afford to discard any values in the vector that have
  // been read
  vector<unsigned> values;
  fill_random(values);

  vector<unsigned> discardedSet;
  int count = 0;

  // find values that would cause the median to be the value we discarded
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> limit_dist(10, 20);
  int randomLimit = limit_dist(gen); // between 5 and 10

  vector<unsigned> keptSet;

  while (count != values.size()) {
    if (count <= randomLimit) {
      if (count == 0) {
        cout << "discarded set: ";
      }
      // read random number of values and push them to the set
      discardedSet.push_back(values[count]);
      cout << values[count] << " ";

      if (count == randomLimit) {
        cout << endl;
        cout << "kept set: ";
      }

      count++;
      continue;
    }

    keptSet.push_back(values[count]);
    cout << values[count] << " ";

    count++;
  }
  cout << endl;

  sort(values.begin(), values.end());
  sort(keptSet.begin(), keptSet.end());
  sort(discardedSet.begin(), discardedSet.end());

  unsigned size = values.size();
  vec_sz mid = size / 2;
  double median;
  median = size % 2 == 0 ? (values[mid] + values[mid - 1]) / 2 : values[mid];

  // print the median
  cout << "median in values[]: " << median << endl;

  // determine if it was in the kept set
  auto it_discarded = find(discardedSet.begin(), discardedSet.end(), median);
  std::string in_discarded = it_discarded[0] == median ? "true" : "false";
  cout << "was median in discarded vector? " << in_discarded << endl;

  // determine if it was in the kept set
  auto it_kept = find(keptSet.begin(), keptSet.end(), median);
  std::string in_kept = it_kept[0] == median ? "true" : "false";
  cout << "was median in kept vector? " << in_kept << endl;
}

int main() {
  threeOne();

  return 0;
}