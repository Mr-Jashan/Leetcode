class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char> sta;
        for(char c:s)
        {
            if(sta.empty()) sta.push(c);
            else if(c==')' && sta.top() == '(' || c==']' && sta.top() =='[' || c=='}' && sta.top() == '{' ) sta.pop();
            else sta.push(c);
        }
        return sta.empty() ;
    }
};
