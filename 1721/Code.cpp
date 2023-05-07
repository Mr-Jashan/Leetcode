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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* num1 = NULL;
        ListNode* num2 = NULL;
        int total=0, count=0;
        while(temp!=NULL)
        {
            total++;
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL)
        {
            count++;
            if(count == k) num1 = temp;
            if(total-count+1 == k) num2 = temp;
            temp = temp->next;
        }
        swap(num1->val, num2->val);
        return head;
    }
};
