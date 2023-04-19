class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int>ans1;
        vector<int>ans2;
        for(int i:nums1)
        {
            if(count(nums2.begin(), nums2.end(), i) == 0) ans1.push_back(i);
        }
        for(int i:nums2)
        {
            if(count(nums1.begin(), nums1.end(), i) == 0) ans2.push_back(i);
        }
        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());
        ans1.erase(std::unique(ans1.begin(), ans1.end()), ans1.end());  
        ans2.erase(std::unique(ans2.begin(), ans2.end()), ans2.end()); 
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
