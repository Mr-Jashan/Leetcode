class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        int c1=0, c2=0, n = nums.size();
        unordered_map<int, int> map;
        for(int i=0 ; i<n ; i++) map[nums[i]]++;
        for(auto [key, data]:map)
        {
            c1 += data / 2;
            c2 += data % 2;
        }
        ans.push_back(c1);
        ans.push_back(c2);
        return ans;
    }
};
