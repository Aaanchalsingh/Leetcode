class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;
        ListNode*p=head,*q=head;int size=0;
        while(p){
            p=p->next;
            size++;
        }
        p=head;
        n=size-n;
        if(n==0) head=head->next;
        while(p&&n--){
            q=p;
            p=p->next;
        }
        if(q->next) q->next=q->next->next;
        else return NULL;
        return head;
    }
};