class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> map;
        int n = nums.size(), j=0;
        for(int i=0 ; i<n ; i++)
        {
            map[nums[i]]++;
        }
        for(auto [key, data]:map)
        {
            if(n%3==0) 
            {
                j = n/3 ;
                if(data>j) ans.push_back(key);
            }
            else
            {
                j = (n/3)+1;
                if(data>=j) ans.push_back(key);
            }
        }
        return ans;
    }
};
