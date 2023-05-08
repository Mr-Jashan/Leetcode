/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* del = NULL;
        int total=0, count=0;
        while(temp!=NULL)
        {
            total++;
            temp = temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            count++;
            if(total-count+1 == n) 
            {
                del = temp;
            }
            temp = temp->next;
        }
        temp=head;
        if(head == del) head = head->next;
        while(temp!=NULL)
        {
            if(temp->next == del)
            {
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};
