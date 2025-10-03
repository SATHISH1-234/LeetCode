class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Create a dummy node before head
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head != nullptr && head->next != nullptr) {
            // Nodes to swap
            ListNode* first = head;
            ListNode* second = head->next;

            // Swapping
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // Move pointers forward
            prev = first;
            head = first->next;
        }

        return dummy->next;
    }
};
