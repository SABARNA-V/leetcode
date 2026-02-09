// Last updated: 2/9/2026, 4:21:48 PM
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head; // Base case
        
        ListNode* temp = head->next;  // Store the second node
        head->next = swapPairs(temp->next);  // Recursively swap the remaining list
        temp->next = head;  // Swap current pair
        
        return temp;  // New head of this swapped pair
    }
};