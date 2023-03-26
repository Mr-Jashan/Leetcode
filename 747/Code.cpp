class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int b = INT_MIN, bi=-1, n=nums.size();
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i] > b)
            {
                b = nums[i];
                bi = i;
            }
        }
        sort(nums.begin(), nums.end());
        if(nums[n-2]*2 <= b) return bi;
        return -1;
    }
};
