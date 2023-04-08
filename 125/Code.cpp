class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string final="";
        for(char c:s)
        {
            if(c>=48 && c<=57 || c>=97 &&c<=122) final +=c;
            else if (c>=65 && c<=90) final += (c+32);
            else continue;
        } 
        cout<<final;
        int l = 0, r = final.size()-1;
        while(l<r)
        {
            if(final[l] != final[r]) return false;
            else l++, r--;
        }
        return true;
    }
};
