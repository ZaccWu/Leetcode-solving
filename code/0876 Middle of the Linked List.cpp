/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if(head->next==NULL){
        return head;        // We need to consider this case
    }
    struct ListNode *A=head,*B=head->next;
    while(B->next!=NULL){
        if(B->next->next==NULL){
            break;
        }
        // The main idea is that A moves one step while B moves two.
        A=A->next;
        B=B->next->next;
    }
    return A->next;
}

