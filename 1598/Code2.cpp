class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<char> sta;
        int ans=0;
        for(auto log:logs)
        {
            for(auto c:log)
            {
                if(c=='.') sta.push(c);
                else if (c=='/') sta.push(c);
            }
            if(sta.size()==3 && ans!=0) ans--;
            else if (sta.size()==1) ans++; 
            while (!sta.empty())  sta.pop();
        }
        return ans;
    }
};
