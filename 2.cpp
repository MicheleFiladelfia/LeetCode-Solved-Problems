/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, Li
 * stNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *result = new ListNode();
        ListNode *head = result;

        while(l1 != nullptr || l2 != nullptr) {
            result = result -> next = new ListNode();

            if(l1 != nullptr){
                result -> val += l1 -> val;
                l1 = l1->next;
            }
            
            if(l2 != nullptr){
                result -> val += l2 -> val;
                l2 = l2->next;
            }

            result -> val += carry;
            carry = 0;

            carry = result -> val / 10;
            result -> val %= 10;
        }
        
        if(carry)
            result -> next = new ListNode(carry);
        
        
        return head->next;
    }
};