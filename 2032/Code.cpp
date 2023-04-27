class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        set<int>v1,v2,v3;
        unordered_map<int,int> mp;
        for(int x:nums1) v1.insert(x);
        for(int x:nums2) v2.insert(x);
        for(int x:nums3) v3.insert(x);
        for(int x:v1) mp[x]++;
        for(int x:v2) mp[x]++;
        for(int x:v3) mp[x]++;
        for(auto x:mp) 
        {
            if(x.second >1) ans.push_back(x.first);
        }
        return ans;
    }
};
