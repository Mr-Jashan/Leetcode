class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int check = arr.size() / 4;
        unordered_map <int,int> map;
        for(int i=0 ; i<arr.size() ; i++)
        {
            map[arr[i]]++;
        }
        for(auto [key, data]: map)
        {
            if(data >= check+1) return key;
        }
        return -1;
    }
};
