# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int len = 1;
        int ans = 0;
        ListNode *p = head;
        while (p->next != nullptr)
        {
            p = p->next;
            ++len;
        }
        int n = len;
        for (int i=0; i<n; ++i)
        {
            ans += ( (head->val) * (std::pow(2, len-1)) );
            head = head->next;
            --len; 
        }

        return ans;
    }
};


int main()
{
    ListNode *node3 = new ListNode(1);
    ListNode *node2 = new ListNode(0, node3);
    ListNode *node1 = new ListNode(1, node2);
    Solution s;
    int ans = s.getDecimalValue(node1);
    std::cout << ans << std::endl;

}