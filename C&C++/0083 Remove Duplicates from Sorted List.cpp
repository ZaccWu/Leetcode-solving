/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head){
        struct ListNode *p=head;
        while(p->next){
            if(p->val != p->next->val){
                p=p->next;
            }else{
                struct ListNode* temp=p->next;
                p->next=p->next->next;
                free(temp);
            }
        }
    }
    return head;
}
