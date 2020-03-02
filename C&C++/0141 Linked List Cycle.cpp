/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *A=head, *B=head;//A goes faster while B goes slower
    while(A && B && A->next){
        A=A->next->next;
        B=B->next;
        if(A==B){
            return true;
        }
    }
    return false;
}
