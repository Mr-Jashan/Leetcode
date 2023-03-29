class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowI = 1, rowF=matrix.size()-1, colI = 0, colF = matrix[0].size()-1, t=0, temp=0;
        int big = matrix.size() * matrix[0].size();
        while(t< big)
        {
            int R = temp;
            for(int i=colI ; i<=colF ; i++)
            {
                if(t<big)
                {
                    ans.push_back(matrix[R][i]);
                    t++;
                    temp = i;
                }
            }
            colF--;
            int C = temp;
            for(int i = rowI ; i<=rowF ; i++)
            {
                if(t<big)
                {
                    ans.push_back(matrix[i][C]);
                    t++;
                    temp = i;
                }
            }
            rowF--;
            R = temp ;
            for(int i=colF ; i>=colI ; i--)
            {
                if(t<big)
                {
                    ans.push_back(matrix[R][i]);
                    t++;
                    temp = i;
                }
            }
            colI++;
            C = temp;
            for(int i=rowF ; i>=rowI ; i--)
            {
                if(t<big)
                {
                    ans.push_back(matrix[i][C]);
                    t++;
                    temp = i;
                }
            }
            rowI++;
        }
        return ans;   
    }
};
