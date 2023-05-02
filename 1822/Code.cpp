class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(count(nums.begin(), nums.end(), 0) != 0) return 0;
        int temp=0;
        for(int x:nums) if(x<0) temp++;
        if(temp%2==0) return 1;
        else return -1;
    }
};
