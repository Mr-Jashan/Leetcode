class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char, int> mp1;
        map<char, int> mp2;
        for(char c1:word1) mp1[c1]++;
        for(char c2:word2) mp2[c2]++;
        for(char ch:word1)
        {
            if(abs(mp1[ch] - mp2[ch]) >3 ) return false;
        }
        for(char ch:word2)
        {
            if(abs(mp1[ch] - mp2[ch]) >3 ) return false;
        }
        return true;
    }
};
