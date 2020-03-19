/*
定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。

示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL

限制：
0 <= 节点个数 <= 5000
*/

//反转链表，这题是基本功
//递归和迭代两种，递归要判断边界，迭代关键在于三指针
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
        head->next=prev;    //箭头的反转
        prev=head;
        head=next;
    }
    return prev;
}

