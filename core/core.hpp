#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

/**
 * @brief print a seperator
 *
 */
void print_seperator() { std::cout << "==========================\n"; }

/**
 * @brief print vector with prefix
 *
 * @tparam Ty
 * @param vec
 * @param prefix
 */
template <typename Ty>
void print_vector(const std::vector<Ty> &vec,
                  const std::string &prefix = "vector") {
  std::cout << prefix;
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << "\n";
}

/**
 * @brief single linked list node
 *
 */
struct LinkedNode;
using LinkedNodePtr = std::shared_ptr<LinkedNode>;
struct LinkedNode {
  LinkedNodePtr next;
  int data;
};

/**
 * @brief single linked list
 *
 */
class LinkedList {
public:
  LinkedList() {
    head_ = std::make_shared<LinkedNode>();
    head_->next.reset();
    head_->data = 0;
  }
  virtual ~LinkedList() {}

public:
  LinkedNodePtr make_node(int data) {
    auto node = std::make_shared<LinkedNode>();
    node->data = data;
    node->next.reset();
    return node;
  }
  LinkedNodePtr get_last_node() {
    LinkedNodePtr node = head_;
    while (node->next.get() != nullptr) {
      node = node->next;
    }
    return node;
  }
  void push_back(int data) {
    auto node = make_node(data);
    auto last_node = get_last_node();
    last_node->next = node;
  }

  LinkedNodePtr get_head() { return head_; }
  LinkedNodePtr get_first_node() { return head_->next; }

public:
  void print_linked_list(const std::string &prefix) {
    std::cout << prefix;
    auto node = head_->next;
    while (node.get() != nullptr) {
      std::cout << node->data << " ";
      node = node->next;
    }
    std::cout << "\n";
  }

private:
  LinkedNodePtr head_;
};