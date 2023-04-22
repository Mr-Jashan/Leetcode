class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int l1=0, l2=0;
        while(l1!=nums1.size() && l2!=nums2.size())
        {
            if(nums1[l1] < nums2[l2]) l1++;
            else if (nums1[l1] > nums2[l2]) l2++;
            else return nums1[l1];
        }
        return -1;
    }
};
