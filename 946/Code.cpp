class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=popped.size();
        stack<int> sta;
        stack<int> sta2; 
        for(int i=n-1 ; i>=0 ; i--) sta2.push(popped[i]);
        for(int x2:pushed)
        {
            sta.push(x2);
            while(!sta.empty() && !sta2.empty() && sta.top() == sta2.top()) 
            {
                sta.pop();
                sta2.pop();
            }
        }
        if(sta.empty() && sta2.empty())return true;
        return false;
    }
};
