class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> map;
        int ans = INT_MIN;
    for(int i=0 ; i<arr.size() ; i++) map[arr[i]]++;
        for(auto [key,data]:map)
        {
            if(key == data)
            {
                ans = max(ans, key);
            }
        }   
        if(ans <0 ) return -1;
        return ans;
    }
};
