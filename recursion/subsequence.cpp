#include "core/core.hpp"

#include <iostream>
#include <vector>

void subsequence(const std::vector<int> &arr, int index, std::vector<int> sub) {
  if (index >= arr.size()) {
    print_vector(sub, "");
    return;
  }

  // not use current element
  subsequence(arr, index + 1, sub);

  // use current element
  sub.push_back(arr.at(index));
  subsequence(arr, index + 1, sub);
}

/**
 * @brief "sub" works like a stack travel with recursion tree
 *
 * @param arr
 * @param index
 * @param sub
 */
void subsequence_optimization(const std::vector<int> &arr, int index,
                              std::vector<int> &sub) {
  if (index >= arr.size()) {
    print_vector(sub, "");
    return;
  }

  // use current element
  sub.push_back(arr.at(index));
  subsequence_optimization(arr, index + 1, sub);

  // not use current element
  sub.pop_back();
  subsequence_optimization(arr, index + 1, sub);
}

int main() {
  // std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  std::vector<int> arr{2, 8, 4, 6};
  print_vector(arr, "origin vector:");
  std::vector<int> sub;
  subsequence(arr, 0, sub);
  print_seperator();
  sub.clear();
  subsequence_optimization(arr, 0, sub);
  return 0;
}