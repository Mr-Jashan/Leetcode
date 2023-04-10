class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
       vector<int> ans;
        int sum = 0, n = nums.size();
        for(int x:nums) sum += x;
        int lsum=0, rsum=sum;
        for(int i=0 ; i<n ; i++)
        {
           rsum -= nums[i];
           ans.push_back(abs(rsum - lsum));
           lsum += nums[i];
        }
        return ans;
    }
};
