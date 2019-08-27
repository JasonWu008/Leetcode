/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next)return true;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
    ListNode* reverse(ListNode*head)
    {
        ListNode*temp1=NULL;
        ListNode*temp2=NULL;
        while(head!=NULL)
        {
            temp1=head;
            head=head->next;
            temp1->next=temp2;
            temp2=temp1;
        } 
        return temp1;
    }
};
