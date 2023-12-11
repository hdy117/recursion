#include "core/core.hpp"

#include <iostream>
#include <stack>
#include <vector>

/**
 * @brief coin change problem. give a array which contains different value of
 * coin, each coin can be used with unlimited times, print all combinations that
 * coins sum up to a given target value.
 *
 * @param coins
 * @param index
 * @param target
 * @param sub
 */
void coin_change(const std::vector<int> &coins, int index, int target,
                 std::vector<int> &sub) {
  // base condition
  if (index >= coins.size()) {
    // bingo
    if (target == 0) {
      print_vector(sub, "");
    }
    return;
  }

  // use index element
  if (coins.at(index) <= target) {
    sub.push_back(coins.at(index));
    coin_change(coins, index, target - coins.at(index), sub);
    sub.pop_back();
  }

  // not use index element and start another branch
  coin_change(coins, index + 1, target, sub);
}

int main() {
  std::vector<int> arr{3, 2, 8, 1};
  std::vector<int> sub;
  int target = 10, sum = 0;
  coin_change(arr, 0, target, sub);
  return 0;
}