class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int flag=0, i;
        string ss;
        if(strs[0].size()==0) return ss;
        if(strs.size()==1 && strs[0].size()!=0) return strs[0];
        for(i=0 ; i<=strs[0].size() ; i++)
        {
            ss=strs[0].substr(0,i);
            for(int j=0 ; j<strs.size() ; j++)
            {
                string temp = strs[j].substr(0,ss.size());
                if(ss != temp) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(i!=strs[0].size()+1)ss.pop_back();
        return ss;
    }
};
