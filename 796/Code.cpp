class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=0;
        while(n<s.size())
        {
            char temp = s[0];
            s.erase(0,1);
            s += temp;
            if(s == goal) return true;
            else n++;
        }
        return false;
    }
};
