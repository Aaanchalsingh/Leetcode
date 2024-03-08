class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*p=head;
        ListNode*q=head->next;
        while(q){
            p=p->next;
            q=q->next;
            if(q&&q->next) q=q->next;
            else return p;
        }
        return p;
    }
};