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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lesshead = new ListNode(0);
        ListNode* greaterhead = new ListNode(0);
        ListNode* less = lesshead;
        ListNode* greater = greaterhead = new ListNode(0);
        while (head != nullptr) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        greater->next = nullptr;
        less->next = greaterhead->next;
        ListNode* newhead = lesshead
        ->next;
        delete lesshead;
        delete greaterhead;
        return newhead;
    }
};