/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* G, int GSize) {
    int sum=0;
    bool isConnect=false;
    int *map=(int*)calloc(10001,sizeof(int));
    for(int i=0;i<GSize;i++){
        map[G[i]]++;
    }
    while(head){
        
        if(head->val<10001&&map[head->val]!=0){
            if(!isConnect){
                sum++;
                isConnect=true;
            }
        }else{
            isConnect=false;
        }
        head=head->next;
    }
    return sum;
}
