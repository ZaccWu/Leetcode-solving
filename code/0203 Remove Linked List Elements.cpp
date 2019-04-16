/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head&&head->val==val)head=removeElements(head->next, val);
    if (head&&head->next)head->next=removeElements(head->next, val);
    return head;
}
