/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *newNode = new ListNode();
        ListNode *dummy = newNode;
        while(list1 && list2){
            if(list1->val <= list2->val){
                newNode->next = list1;
                list1 = list1->next;
            }else{
                newNode->next = list2;
                list2 = list2->next;
            }
            newNode = newNode->next;
        }
        newNode->next = list1? list1 : list2;
        return dummy->next;


    }
};
