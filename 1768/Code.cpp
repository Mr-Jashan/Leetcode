class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int st1=0, st2=0, n1=word1.size(), n2=word2.size();
        string ans="";
        while(st1 <= n1-1 || st2 <= n2-1)
        {
            if(st1 <= n1-1) 
            {
                ans += word1[st1];
                st1++;
            }
            if(st2 <= n2-1) 
            {
                ans += word2[st2];
                st2++;
            }
        }
        return ans;
    }
};
