class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), ans=0, ans1, ans2;
        ans1 = nums[n-1] * nums[n-2] * nums[n-3];
        ans2 = nums[n-1] * nums[0] * nums[1];
        ans = max(ans1, ans2);
        return ans;
    }
};
