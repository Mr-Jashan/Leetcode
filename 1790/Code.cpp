class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size(), count=0;
        string t1="", t2="";
        for(int i=0 ; i<n ; i++)
        {
            if(s1[i] != s2[i]) 
            {
                t1 += s1[i];
                t2 += s2[i];
                count++;
            }
            if(count>2 )return false;
        }
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());
        if(count ==1 || t1 != t2) return false; 
        return true;
    }
};
