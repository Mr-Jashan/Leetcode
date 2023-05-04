class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i:nums1) mp[i]++;
        for(int i:nums2) mp[i]++;
        for(auto x:mp)
        {
            if(x.second >1) return x.first;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int ans = (min(nums1[0], nums2[0])*10) + max(nums1[0], nums2[0]); 
        return ans;
    }
};
