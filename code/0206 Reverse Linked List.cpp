/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Recursively
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode* root=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return root;
}

// Iteratively
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=NULL,*next;
    while(head)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}

