class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=INT_MIN, n=nums.size();
        vector<int> temp;
        for(int i=0 ; i<n ; i++) temp.push_back(nums[i][i]);
        for(int i=0 ; i<n ; i++) temp.push_back(nums[i][n-1-i]);
        sort(temp.rbegin(), temp.rend());
        int flag=0;
        if(temp[0]==1)return 0;
        if(temp[0]==2 || temp[0]==3) return temp[0];
        for(int x:temp) 
        {
            flag=0;
            if(x%2==0 || x%3==0) continue;
            for(int i=5 ; i<x ; i+=2) 
            {
                if(x%i ==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return x; 
        }
        return 0;
    }
};
