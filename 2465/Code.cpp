class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<float,int> mp;
        int n = nums.size();
        int l=0 , r=n-1;
        while(l<r)
        {
            float temp =0;
            temp = (nums[l] + nums[r])/(float)2;
            mp[temp]++;
            l++;
            r--;
        }
        return mp.size();
    }
};
