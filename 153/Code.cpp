class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r=nums.size()-1, min=0;
        if(r+1 == 1) return nums[0];
        while(l<r)
        {
            if(nums[l] < nums[r])
            {
                min = nums[l];
                r--;
            }
            else
            {
                min = nums[r];
                l++;
            }
        }
        return min;
    }
};
