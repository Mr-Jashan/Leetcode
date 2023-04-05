class Solution {
public:
    int partitionString(string s) {
        int count=1;
        unordered_map<char, bool> map;
        for(auto c:s)
        {
            if(map[c] == true) count++, map.clear();
            map[c] =true;
        }
        return count;
    }
};
