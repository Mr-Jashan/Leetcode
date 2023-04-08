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
    bool isPalindrome(ListNode* head) {
        ListNode* temp =head;
        vector<int> vec;
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        int l=0, r=vec.size()-1;
        while(l<r)
        {
            if(vec[l] != vec[r]) return false;
            else l++, r--;
        }
        return true;
    }
};
