class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> sta;
        int n = s.size();
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(sta.empty()) sta.push(s[i]);
            else if(sta.top() == s[i]) sta.pop();
            else sta.push(s[i]);
        }
        string ans="";
        while(!sta.empty())
        {
            ans += sta.top();
            sta.pop();
        }
        return ans;
    }
};
