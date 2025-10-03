class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to simplify edge cases (like removing head)
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast pointer n+1 steps ahead to maintain a gap of n
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both fast and slow until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Now slow->next is the node to remove
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;

        delete nodeToDelete; // free memory

        return dummy->next; // return updated head
    }
};
