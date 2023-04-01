class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1, less=INT_MAX;
        if(nums.size() == 1) return nums[0];
        while(l<=r)
        {
            if(nums[l] > nums[r])
            {
                less = min(less, nums[r]);
                l++;
            }
            else if(nums[l] < nums[r])
            {
                less = min(less, nums[l]);
                r--;
            }
            else
            {
                less = min(less, nums[l]);
                l++;
                r--;
            }
        }
        return less;
    }
};
