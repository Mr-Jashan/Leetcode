class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        int ans=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            int no1 = diff + nums[i];
            if(count(nums.begin(), nums.end(), no1) > 0) 
            {
                int no2 = diff + no1;
                if(count(nums.begin(), nums.end(), no2) > 0) ans++;
            }
        }
        return ans;
    }
};


