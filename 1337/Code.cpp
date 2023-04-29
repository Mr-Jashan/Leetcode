class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int>mp;
        vector<int> ans;
        int z=0;
        for(auto vec:mat)
        {
            mp[z] = count(vec.begin(), vec.end(), 1);
            z++;
        }
        multimap <int,int> mmp;
        for(auto x:mp) mmp.insert({x.second, x.first});
        z=0;
        for(auto x:mmp)
        {
            if(z == k) break;
            ans.push_back(x.second);
            z++;
        }
        return ans;
    }
};
