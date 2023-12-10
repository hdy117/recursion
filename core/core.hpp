#pragma once

#include <iostream>
#include <string>
#include <vector>

void print_seperator() { std::cout << "==========================\n"; }

template <typename Ty>
void print_vector(const std::vector<Ty> &vec,
                  const std::string &prefix = "vector") {
  std::cout << prefix;
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << "\n";
}