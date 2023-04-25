class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=nums.size();
        vector<int> temp;
        for(int x:nums) temp.push_back(x);
        nums.clear();
        for(int x:temp) if(x==val) ans--;
        for(int x:temp) if(x != val)nums.push_back(x);
        return ans;
    }
};
