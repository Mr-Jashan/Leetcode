class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int x:nums) st.insert(x);
        nums.clear();
        for(int x:st) nums.push_back(x);
        return st.size();
    }
};
