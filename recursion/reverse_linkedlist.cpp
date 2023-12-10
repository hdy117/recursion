#include "core/core.hpp"

#include <iostream>
#include <vector>

void reverse(LinkedNodePtr &head, LinkedNodePtr node) {
  if (node.get() == nullptr)
    return;

  auto node_next = node->next;
  if (node_next.get() == nullptr) {
    head->next = node;
    return;
  }

  reverse(head, node_next);
  node_next->next = node;
  node->next.reset();
}

void swap_linked_list(LinkedList &linked_list) {
  LinkedNodePtr head = linked_list.get_head();
  LinkedNodePtr node = linked_list.get_first_node();
  reverse(head, node);
}

int main() {
  LinkedList linked_list;

  linked_list.push_back(1);
  linked_list.push_back(3);
  linked_list.push_back(10);
  linked_list.push_back(2);
  linked_list.push_back(-1);
  linked_list.push_back(0);
  linked_list.push_back(22);
  linked_list.push_back(12);
  linked_list.push_back(-3);

  linked_list.print_linked_list("origin linked list:\t");
  swap_linked_list(linked_list);
  linked_list.print_linked_list("resversed linked list:\t");
  return 0;
}