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
    
    ListNode* reversel(ListNode* curr,ListNode* prev, ListNode* forward){
        
        if(curr == NULL){
            return prev;
        }
    
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        
       return reversel( curr, prev, forward);
        
    }
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = NULL;
        ListNode* forward;
    
        
        return reversel(head, prev, forward);
    }
};