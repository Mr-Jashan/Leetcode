class Solution {
public:
    string removeStars(string s) {
        // int n=s.size();
        stack<char> sta;
        for(char c:s)
        {
            if(c != '*') sta.push(c);
            else if(c == '*' && !sta.empty()) sta.pop();
        }
        string ans="";
        while(!sta.empty())
        {
            ans += sta.top();
            sta.pop();
        }
        int l=0, r=ans.size()-1;
        while(l<r) 
        {
            swap(ans[l], ans[r]);
            l++;
            r--;
        }
        return ans;
    }
};
