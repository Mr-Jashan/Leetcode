class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0, n=grid.size();
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<grid[i].size() ; j++)
            {
                if(grid[i][j]<0) ans++;
            }
        }
        return ans;
    }
};
