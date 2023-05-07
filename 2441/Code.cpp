class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), l=0, r=n-1;
        while(l<r)
        {
            if(nums[0] >=0) return -1;
            else if(nums[l]*(-1) == nums[r]) return nums[r];
            else if(nums[l]*(-1) > nums[r]) l++;
            else r--;
        }
        return -1;
    }
};

