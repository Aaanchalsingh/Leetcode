class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode *slow=headA;
        ListNode *fast=headB;
        while(fast!=slow){
            if(slow) slow=slow->next;
            else slow=headA;
            if(fast) fast=fast->next;
            else fast=headB;
        }
        return slow;
    }
};