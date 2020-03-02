/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* first=head;
    struct ListNode* second=head;
    while(first!=NULL){
        first=first->next;
        if(n--<0){
            second=second->next;
        }
    }
    if(n==0) head=head->next;
    else second->next=second->next->next;
    return head;
}
