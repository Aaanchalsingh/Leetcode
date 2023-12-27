class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode*cur=head;
        if(!head||!head->next) return;
        while(cur->next&&cur->next->next){
            ListNode*temp=head,*last=head;
            while(temp->next){
                last=temp;
                temp=temp->next;
            }
            ListNode*t=cur->next;
            cur->next=temp;
            temp->next=t;
            cur=t;
            last->next=NULL;
        }
    }
};