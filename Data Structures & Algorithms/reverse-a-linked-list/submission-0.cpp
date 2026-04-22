class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* temp = curr->next;
        while (curr) {
            
            curr->next = prev;
            prev = curr;
            curr = temp;
            temp=temp->next;
        }
        return prev;
    }
};