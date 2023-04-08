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
    bool isPalindrome(ListNode* head) 
    {
        int count=0;
        ListNode *temp =head;
        ListNode *temp2 =head;
        stack<int> sta;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        if(count ==1) return true;
        int count2 = count/2, count3=1;
        while(temp2 != NULL)
        {
            if(count%2==0)
            {
                if(count3 <= count2) sta.push(temp2->val);
                else if(sta.top() == temp2->val) sta.pop();
            }
            else
            {
                if(count3 <= count2) sta.push(temp2->val);
                else if(sta.top() == temp2->val) sta.pop();
            }
            if(count3 == count2 && count%2 !=0) temp2 = temp2->next;
            temp2 = temp2->next;
            count3++;
        }
        if(sta.empty()) return true;
        return false;
    }
};
