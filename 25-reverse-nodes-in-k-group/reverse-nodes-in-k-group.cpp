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
    // Function to calculate length
    int getLength(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            head = head->next;
            len++;
        }
        return len;
    }

    // Reverse k nodes recursively
    ListNode* reverseKGroupUtil(ListNode* head, int k, int rLen) {
        if (rLen < k)
            return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int count = 0;

        while (count < k && curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        head->next = reverseKGroupUtil(next, k, rLen - k);

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getLength(head);
        return reverseKGroupUtil(head, k, len);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna