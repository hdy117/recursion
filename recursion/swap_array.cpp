#include "core.hpp"

#include <iostream>
#include <vector>

void swap_array(std::vector<int> &arr, int left, int right) {
  if (left >= right)
    return;
  std::swap(arr.at(left), arr.at(right));
  swap_array(arr, left + 1, right - 1);
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  print_vector(arr, "origin vector:");
  swap_array(arr, 0, arr.size() - 1);
  print_vector(arr, "reversed vector:");
  return 0;
}