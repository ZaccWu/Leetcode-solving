/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lA=0,lB=0;  //Length of the list
    for(struct ListNode* pA=headA; pA!=NULL; pA=pA->next) lA++;
    for(struct ListNode* pB=headB; pB!=NULL; pB=pB->next) lB++;
    
    /* move the longer one forward to match two lists at the start-line */
    for(int i = 0; i<(lA-lB); i++) headA=headA->next;
    for(int i = 0; i<(lB-lA); i++) headB=headB->next;

    while(headA!=headB)
    {
        headA=headA->next;
        headB=headB->next;
    }
    return headA;
}
