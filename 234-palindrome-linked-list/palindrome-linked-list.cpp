class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode*cur=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*p=head,*q=head;
        while(q){
            p=p->next;
            q=q->next;
            if(q) q=q->next;
        }
        ListNode*temp=reverse(p);
        p=head;
        while(p&&temp){
            if(p->val!=temp->val) return false;
            p=p->next;
            temp=temp->next;
        }
        return true;
    }
};