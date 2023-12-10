#include "core/core.hpp"

#include <iostream>
#include <string>
#include <vector>

bool is_palindrome(const std::string &str, int left, int right) {
  if (left >= right)
    return true;
  return str.at(left) == str.at(right) &&
         is_palindrome(str, left + 1, right - 1);
}

bool is_palindrome_a(const std::string &str, int left, int right) {
  if (left >= right)
    return true;
  if (str.at(left) != str.at(right))
    return false;
  return is_palindrome_a(str, left + 1, right - 1);
}

int main() {
  std::string str_a("madam");
  std::string str_b("madama");

  std::cout << "is_palindrome:\t" << str_a << "\t-->\t"
            << is_palindrome(str_a, 0, str_a.size() - 1) << "\n";
  std::cout << "is_palindrome:\t" << str_b << "\t-->\t"
            << is_palindrome(str_b, 0, str_b.size() - 1) << "\n";

  std::cout << "is_palindrome_a:\t" << str_a << "\t-->\t"
            << is_palindrome_a(str_a, 0, str_a.size() - 1) << "\n";
  std::cout << "is_palindrome_a:\t" << str_b << "\t-->\t"
            << is_palindrome_a(str_b, 0, str_b.size() - 1) << "\n";
  return 0;
}