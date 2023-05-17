class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float> nums;
        vector<int> ans;
        int n = arr.size();
        float  pro;
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                pro = arr[i]/(float)arr[j] ;
                nums.push_back(pro);
            }
        }
        sort(nums.begin(), nums.end());
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if((arr[i]/(float)arr[j]) == nums[k-1])
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};


