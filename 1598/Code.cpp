class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0, flag1=0, flag2=0;
        for(auto str:logs)
        {
            if(ans<0) ans=0;
            for(auto c:str)
            {
                if(c=='.'&& flag1==0) flag1=1;
                else if(flag1==1 && c=='.') flag2=1;
                else if (flag1==1 && flag2==1 && c=='/') ans--, flag1=0, flag2=0;
                else if(flag1==1 && c=='/') 
                {flag1=0; continue;}
                else if(c=='/') ans++;
            }
        }
        if(ans<0) return 0;
        return ans;
    }
};
