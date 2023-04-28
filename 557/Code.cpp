class Solution {
public:
    string reverseWords(string s) {
        int l=0, r=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] !=' ') r++;
            else
            {
                r--;
                while(l<r) 
                {
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
                l=i+1;
                r=i+1;
            }
        }
        r--;
        while(l<r) 
        {
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};
