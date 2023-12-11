#include "core/core.hpp"

#include <iostream>
#include <stack>
#include <vector>

/**
 * @brief print all subsequence whose sum is k
 *
 * @param arr
 * @param index
 * @param sub, subsequence works like a stack travells with recursion tree
 * @param k
 * @param sum, subsequence works like a stack travells with recursion tree
 */
void sum_of_subsequence_is_k(const std::vector<int> &arr, int index,
                             std::vector<int> &sub, int k, int sum) {
  if (index >= arr.size()) {
    // print_vector(sub, "sub:");
    if (sum == k) {
      print_vector(sub, "sum:");
    }
    return;
  }

  // use this element
  sub.push_back(arr.at(index));
  sum += arr.at(index);
  sum_of_subsequence_is_k(arr, index + 1, sub, k, sum);

  // not use this element
  sum -= sub.back();
  sub.pop_back();
  sum_of_subsequence_is_k(arr, index + 1, sub, k, sum);
}

/**
 * @brief find and print first subsequence whose sum is k
 *
 * @param arr, original vector
 * @param index, index of original vector
 * @param sub, subsequence works like a stack travels with recursion tree
 * @param k, target value
 * @param sum, current sum
 * @param found_flag, flag if found a subsequence
 */
void first_subsequence_whose_sum_is_k(const std::vector<int> &arr, int index,
                                      std::vector<int> &sub, int k, int sum,
                                      bool &found_flag) {
  if (index >= arr.size()) {
    // print_vector(sub, "sub:");
    if (sum == k) {
      print_vector(sub, "sum:");
      found_flag = true;
    }
    return;
  }

  // use this element
  if (found_flag) {
    return;
  } else {
    sub.push_back(arr.at(index));
    sum += arr.at(index);
    first_subsequence_whose_sum_is_k(arr, index + 1, sub, k, sum, found_flag);
  }

  // not use this element
  if (found_flag) {
    return;
  } else {
    sum -= sub.back();
    sub.pop_back();
    first_subsequence_whose_sum_is_k(arr, index + 1, sub, k, sum, found_flag);
  }
}

/**
 * @brief count_of_subsequence_whose_sum_is_k
 *
 * @param arr
 * @param index
 * @param k
 * @param sum, works like a stack travels with recursion tree
 * @return int
 */
int count_of_subsequence_whose_sum_is_k(const std::vector<int> &arr, int index,
                                        int k, int sum) {
  if (index >= arr.size()) {
    return static_cast<int>(k == sum);
  }

  // use current element
  sum += arr.at(index);
  int count_a = count_of_subsequence_whose_sum_is_k(arr, index + 1, k, sum);

  // not use current element
  sum -= arr.at(index);
  int count_b = count_of_subsequence_whose_sum_is_k(arr, index + 1, k, sum);
  return count_a + count_b;
}

int main() {
  std::vector<int> arr{2, 8, 4, 6, 78, 3, 1, 0, -3, -1};
  std::vector<int> sub;
  int k = 10, sum = 0;
  sum_of_subsequence_is_k(arr, 0, sub, k, sum);

  print_seperator();

  sub.clear();
  bool found_flag = false;
  first_subsequence_whose_sum_is_k(arr, 0, sub, k, sum, found_flag);

  print_seperator();

  std::cout << "count --> "
            << count_of_subsequence_whose_sum_is_k(arr, 0, k, sum) << "\n";
  return 0;
}