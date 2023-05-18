class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0 ; i<n ; i++) mp[i]=1;
        for(vector<int> x:edges)
        {
            mp[x[1]] = 0;
        }
        for(auto [key,data]:mp)
        {
            if(data==1) ans.push_back(key);
        }
        return ans;
    }
};
