class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int big=INT_MIN, ind=0;
        for(int i=0 ; i<mat.size() ; i++)
        {
            int temp = count(mat[i].begin(), mat[i].end(), 1);
            if(temp > big) big = temp, ind = i;
        }
        ans.push_back(ind);
        ans.push_back(big);
        return ans;
    }
};
