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
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(carry==1||first||second){
            int val=carry;
            if(first){
                val+=first->val;
                first=first->next;
            }
            if(second){
                val+=second->val;
                second=second->next;
            }
            carry=val/10;
            val=val%10;
            ListNode* newnode=new ListNode(val%10);
            temp->next=newnode;
            temp=temp->next;
        }

        return dummy->next;
    }
};