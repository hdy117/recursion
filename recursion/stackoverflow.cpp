#include "core/core.hpp"
#include <iostream>

/**
 * @brief no stop condition
 *
 */
void stackoverflow() {
  std::cout << "called again.\n";
  stackoverflow();
}

int main() {
  stackoverflow();
  return 0;
}