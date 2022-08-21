# include <iostream>

// https://leetcode.cn/problems/delete-node-in-a-linked-list/



//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* next_node = node->next;
        node->val = next_node->val;
        node->next = next_node->next;
        next_node->next = NULL;
        delete next_node;
    }
};


int main()
{
    ListNode *node1 = new ListNode(4);
    ListNode *node2 = new ListNode(5);
    ListNode *node3 = new ListNode(1);
    ListNode *node4 = new ListNode(9);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    std::cout << node1->val << std::endl; 
    std::cout << node2->val << std::endl; 
    std::cout << node3->val << std::endl; 
    std::cout << node4->val << std::endl; 

    Solution s;
    s.deleteNode(node2);

    std::cout << node1->val << std::endl; 
    std::cout << node2->val << std::endl; 
    std::cout << node3->val << std::endl; 
    std::cout << node4->val << std::endl; 
}