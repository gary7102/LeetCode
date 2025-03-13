/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 注意 while(fast->next!=nullptr && fast!=nullptr) 會發生錯誤
// 因為有可能導致存取空指標的成員 (存取 nullptr->next)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode *fast = head;
        struct ListNode *slow = head;
        while(fast !=nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return 1;
            }
        }
        return 0;
    }
};
