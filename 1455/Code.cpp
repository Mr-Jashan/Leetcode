class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> temp;
        string s;
        for(char c:sentence) 
        {
            if(c!=' ') s+=c;
            else 
            {
                temp.push_back(s);
                s.clear();
            }
        }
        temp.push_back(s);
        for(int i=0 ; i<temp.size() ; i++)
        {
            string ss = temp[i].substr(0,searchWord.size());
            if(ss == searchWord) return i+1;
        }
        return -1;
    }
};
