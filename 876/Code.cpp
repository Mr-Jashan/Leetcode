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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        int count = 0, count2=1;
        while(temp !=NULL)
        {
            count++;
            temp = temp->next;
        }
        while(temp2 != NULL)
        {
            if(count2  == (count/2)+1 ) return temp2;
            temp2 = temp2->next;
            count2++;
        }
        return temp2;
    }
};
