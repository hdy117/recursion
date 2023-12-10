#include <string>
#include <vector>

#include "core.hpp"

/**
 * @brief insert val_to_insert(index is val_index) into sorted vector
 *
 */
void insert(std::vector<int> &vec, int val_to_insert_index) {
  for (int i = val_to_insert_index - 1; i >= 0; --i) {
    auto &val = vec.at(i), &val_next = vec.at(i + 1);
    if (val_next < val) {
      std::swap(val, val_next);
    }
  }
}

void insert_sort(std::vector<int> &vec) {
 for (auto i = 1; i < vec.size(); ++i) {
    insert(vec, i);
  }
  print_vector(vec, "insert sort:");
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  print_vector(arr, "origin vector:");
  insert_sort(arr);
  return 0;
}