class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mp1,mp2;
        vector<int> ans;
        int count=0;
        for(int i=0 ; i<A.size() ; i++)
        {
            count =0;
            for(int j=0 ; j<=i ; j++)
            {
                mp1[A[j]]++;
                mp2[B[j]]++;
            }
            for(int j=0 ; j<=i ; j++)
            {
                if(mp2[A[j]] != 0) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
