class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), ans=0, big=0;
        unordered_map<int, int>  map;
        for(int i=0 ; i<n ; i++)
        {
            map[nums[i]]++;
        }
        for(auto [key, data]:map)
        {
            big = max(big, data);
            if(big == data)
            {
                ans = key;
            }
        }
        return ans;
    }
};
