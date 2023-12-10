/**
 * @file select_sort.cpp
 * @author DongYuanHu (dongyuanhu@tencent.com)
 * @brief assume [0,i] is sorted array, select mininum val from [i, n] and swap
 * with i
 * @version 0.1
 * @date 2023-12-09
 *
 *
 */

#include <string>
#include <vector>

#include "core/core.hpp"

int select_min(const std::vector<int> &vec, int start_index) {
  if (start_index >= vec.size())
    return -1;

  int min_index = start_index;
  auto min_value = vec.at(min_index);

  for (auto i = min_index + 1; i < vec.size(); ++i) {
    if (vec.at(i) < min_value) {
      min_value = vec.at(i);
      min_index = i;
    }
  }

  return min_index;
}

void select_sort(std::vector<int> &vec) {
  for (auto i = 0; i < vec.size(); ++i) {
    int min_index = select_min(vec, i);
    if (min_index >= 0) {
      std::swap(vec.at(i), vec.at(min_index));
    }
  }
  print_vector(vec, "select sort:");
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  select_sort(arr);
  return 0;
}