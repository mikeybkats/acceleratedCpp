#ifndef CREATE_VECTOR_H
#define CREATE_VECTOR_H

#include <vector>

using std::vector;

typedef vector<unsigned>::size_type vec_sz;

void fill_random_length(vector<unsigned> &values, int n);

void print_vector(vector<unsigned> &values);

#endif