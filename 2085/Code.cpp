class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp;
        map<string, int> mp1;
        int ans=0;
        for(auto str:words1) mp[str]++;
        for(auto str1:words2) mp1[str1]++;
        for(auto str:words1)
        {
            if(mp[str] ==1 && mp1[str] ==1) ans++;
        }
        return ans;
    }
};
