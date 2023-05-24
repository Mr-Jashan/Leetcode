class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0, n = mat.size(), i=0;
        for(i=0 ; i<n ; i++)
        {
            ans += mat[i][i];
        }
        i = n-1;
        for(int j=0 ; j<n ; j++)
        {
            ans += mat[i][j];
            i--;
        }
        i = n/2;
        if(n%2!=0) ans -= mat[i][i];
        return ans;
    }
};


