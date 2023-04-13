class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> sta;
        int n=pushed.size(), no=0;
        for(int i=0 ; i<n ; i++)
        {
            sta.push(pushed[i]);
            while(!sta.empty() && sta.top() == popped[no])
            {
                sta.pop();
                no++;
            }
        }
        if(sta.empty()) return true;
        return false;
    }
};
