#include <bits/stdc++.h>

using namespace std;

  // Definition for singly-linked list.
  struct ListNode
  {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  class Solution
  {
  public:
      void deleteNode(ListNode *node)
      {
          ListNode *curr = node->next;
          node->val = node->next->val;
          node->next = node->next->next;
          delete curr;
      }
      void deleteNode1(ListNode* node) {
       node->val=node->next->val;
       node->next=node->next->next;
    }
  };