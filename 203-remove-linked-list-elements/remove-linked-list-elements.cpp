class Solution {
public:
    ListNode* removeElements(ListNode* head, int key) {
        ListNode*p= head,*q= head;
        if(!p) return NULL;
        while(p){
            if(p->val==key){
                if(p==head){
                    p=p->next;
                    head=p;
                    p=head;
                    continue;
                }
                q->next=q->next->next;
                p=q;
            }
            q=p;
            p=p->next;
        }
        return head;
    }
};