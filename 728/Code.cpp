class Solution {
public:
    bool list(int n)
    {
        int temp = n;
        while (temp!=0)
        {
            if(temp%10 ==0) return false;
            else if(n%(temp%10) != 0) return false;
            temp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left ; i<=right ; i++)
        {
            if(list(i)) ans.push_back(i);
        }
        return ans;
    }
};
