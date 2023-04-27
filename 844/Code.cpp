class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="", t1="";
        for(char c:s)
        {
            if(c=='#' && s1.empty()) continue; 
            else if(c == '#') s1.pop_back();
            else s1+=c;
        }
        for(char c:t)
        {
            if(c=='#' && t1.empty()) continue; 
            else if(c == '#') t1.pop_back();
            else t1+=c;
        }
        if(s1==t1)return true;
        return false;
    }
};

