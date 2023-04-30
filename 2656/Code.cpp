class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        int ans=0;
        while(k!=0)
        {
            ans+= nums[0];
            nums[0] +=1;
            k--;
        }
        return ans;
    }
};
