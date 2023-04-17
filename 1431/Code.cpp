class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans;
        long int max  =*max_element(candies.begin(), candies.end());
        for(int i=0 ; i<candies.size() ; i++)
        {
                if(candies[i]+extraCandies <max)
                {
                    ans.push_back(0);
                } 
                else
                {
                    ans.push_back(true);
                }
        }
        return ans;
    }
};
