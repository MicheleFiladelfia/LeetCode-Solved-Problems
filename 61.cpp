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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head  == nullptr || k == 0){
            return head;
        }
        
        ListNode* tail = head;
        int length = 1;
        while(tail -> next != nullptr){
            tail = tail -> next;
            length++;
        }
        
        if(length == k)
            return head;
        
        tail -> next = head;
        
        int round = length - (k % length);
        
        while(round){
            tail = tail -> next;
            round--;
        }
        
        ListNode* ans = tail -> next;
        tail -> next = nullptr;
        
        
        
        return ans;
    }
};
