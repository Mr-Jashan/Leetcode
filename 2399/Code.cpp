class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(s[i] == s[j])
                {
                    if((j-i-1) != distance[int(s[i]) - int('a')]) return false;
                }
            }
        }
        return true;
    }
};
