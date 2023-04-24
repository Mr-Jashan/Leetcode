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
    void in(ListNode* &head , int val)
    {
        ListNode* n = new ListNode(val);
        if(head == NULL) 
        {
            head = n;
            return;
        }
        ListNode* temp = head;
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        return;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* head = NULL;
        if(temp1==NULL && temp2!=NULL) return temp2;
        if(temp1!=NULL && temp2==NULL) return temp1;
        while(temp1!=NULL && temp2!=NULL)
        {
            
            if(temp1->val < temp2->val)
            {
                in(head, temp1->val);
                temp1 = temp1->next;
            }
            else if(temp1->val > temp2->val)
            {
                in(head, temp2->val);
                temp2 = temp2->next;
            }
            else
            {
                in(head, temp1->val);
                in(head, temp2->val);
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        while(temp2!=NULL)
        {
            in(head, temp2->val);
            temp2 = temp2->next;
        }
        while(temp1!=NULL)
        {
            in(head, temp1->val);
            temp1 = temp1->next;
        }
        return head;
    }
};
