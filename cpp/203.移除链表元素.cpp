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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val)
        {
            head=head->next;
        }
        ListNode*temp=head;
        while(temp!=NULL)
        {
            while(temp->next!=NULL&&temp->next->val==val)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};
