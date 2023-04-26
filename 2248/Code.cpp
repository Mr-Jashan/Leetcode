class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(auto vec:nums)
        {
            for(int x:vec) mp[x]++;
        }
        for(auto c:mp)  if(c.second == nums.size()) ans.push_back(c.first);
        sort(ans.begin(), ans.end());
        return ans;
    }
    
};
