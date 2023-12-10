#include <string>
#include <vector>

#include "core/core.hpp"

int partion(std::vector<int> &vec, int i_start, int i_end) {
  int i_pivot = (i_start + i_end) / 2;
  int pivot_val = vec.at(i_pivot);

  // swap i_pivot value to i_start
  std::swap(vec.at(i_start), vec.at(i_pivot));
  i_pivot = i_start;

  for (auto index = i_start + 1; index <= i_end; ++index) {
    // find a element which should be moved to the left of pivot
    if (vec.at(index) < pivot_val) {
      // swap smaller element with element at (i_pivot+1)
      std::swap(vec.at(i_pivot + 1), vec.at(index));
      // swap elements at (i_pivot+1) and i_pivot
      std::swap(vec.at(i_pivot + 1), vec.at(i_pivot));
      // move pivot index forward
      i_pivot++;
    }
  }

  return i_pivot;
}

void quick_sort(std::vector<int> &vec, int i_start, int i_end) {
  // quit if i_start == i_end
  if (i_start >= i_end)
    return;

  int i_pivot = partion(vec, i_start, i_end);
  quick_sort(vec, i_start, i_pivot);
  quick_sort(vec, i_pivot + 1, i_end);
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 52, 1, 0, -3};
  quick_sort(arr, 0, arr.size() - 1);
  print_vector(arr, "quick sort:");
  return 0;
}