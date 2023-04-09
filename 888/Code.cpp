class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n1 = aliceSizes.size(), n2 = bobSizes.size();
        int sum1=0, sum2=0;
        vector<int>ans;
        for(int x:aliceSizes) sum1 += x;
        for(int x:bobSizes) sum2 += x;
        int hsum = (sum1+sum2)/2, l1=0, l2=0;
        for(int i=0 ; i<n1 ; i++)
        {
            for(int j=0 ; j<n2 ; j++)
            {
                if(sum1 - aliceSizes[i] + bobSizes[j] == hsum)
                {
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};
