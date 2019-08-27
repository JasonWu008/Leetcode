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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp1=head;
        ListNode*temp2=NULL;
        while(temp1!=NULL)
        {
            ListNode*temp3 = temp1->next;
            temp1->next=temp2;
            temp2=temp1;
            temp1=temp3;
        }
        return temp2;
    }
};
