/**
 * @file bubble_sort.cpp
 * @author DongYuanHu (dongyuanhu@tencent.com)
 * @brief assume
 * @version 0.1
 * @date 2023-12-09
 *
 *
 */

#include <string>
#include <vector>

#include "core.hpp"

/**
 * @brief bubble through start_index to end_index, max value will bubble to
 * end_index
 *
 * @param vec
 * @param start_index
 * @param end_index
 */
void bubble(std::vector<int> &vec, int start_index, int end_index) {
  for (auto i = start_index; i < end_index; ++i) {
    // reference to value at i and i_next
    auto &val_i = vec.at(i), &val_i_next = vec.at(i + 1);

    // big one bubble to end direction of vector
    if (val_i > val_i_next) {
      std::swap(val_i, val_i_next);
    }
  }
}

void bubble_sort(std::vector<int> &vec) {
  for (int i = vec.size() - 1; i >= 0; i--) {
    bubble(vec, 0, i);
  }
  print_vector(vec, "bubble sort:");
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  print_vector(arr, "origin vector:");
  bubble_sort(arr);
  return 0;
}