#include <string>
#include <vector>

#include "core.hpp"

void merge(std::vector<int> &vec, int i_start, int i_mid, int i_end) {
  int i_left = i_start, i_right = i_mid + 1;
  int i_vec = 0;
  std::vector<int> vec_tmp(vec.begin() + i_start, vec.begin() + i_end + 1);

  for (; i_vec <= i_end && i_left <= i_mid && i_right <= i_end; ++i_vec) {
    if (vec.at(i_left) < vec.at(i_right)) {
      vec_tmp.at(i_vec) = vec.at(i_left);
      i_left++;
    } else {
      vec_tmp.at(i_vec) = vec.at(i_right);
      i_right++;
    }
  }

  while (i_left <= i_mid) {
    vec_tmp.at(i_vec) = vec.at(i_left);
    i_left++;
    i_vec++;
  }
  while (i_right <= i_end) {
    vec_tmp.at(i_vec) = vec.at(i_right);
    i_right++;
    i_vec++;
  }

  auto vec_it = vec.begin() + i_start;
  for (auto it = vec_tmp.begin(); it != vec_tmp.end(); ++it) {
    *vec_it = *it;
    vec_it++;
  }
}

void divide(std::vector<int> &vec, int i_start, int i_end) {
  // base scenario, return if there is only one or empty in current state
  if (i_start >= i_end)
    return;

  int i_middle = (i_start + i_end) / 2;

  divide(vec, i_start, i_middle);
  divide(vec, i_middle + 1, i_end);
  merge(vec, i_start, i_middle, i_end);
}

void merge_sort(std::vector<int> &vec) {
  int i_start = 0, i_end = vec.size() - 1;
  divide(vec, i_start, i_end);
  print_vector(vec, "merge sort:");
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  print_vector(arr, "origin vector:");
  merge_sort(arr);
  return 0;
}