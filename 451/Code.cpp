class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> map;
        for(int i=0 ; i<s.size() ; i++) map[s[i]]++;
        multimap<int, char> mmap;
        for(auto &ab:map) mmap.insert({ab.second, ab.first});
        for(auto [key, data]:mmap )
        {
            for(int i=1 ; i<=key ; i++) ans += data;
        }

        int l=0, r=ans.size()-1;
        while(l<r)
        {
            swap(ans[l], ans[r]);
            l++;
            r--;
        }
        return ans;
    }
};
