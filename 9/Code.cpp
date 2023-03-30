class Solution {
public:
    bool isPalindrome(int x) 
    {
        string str = to_string(x); 
        if(str[0] == '-')
        {
            return false;
        }
        else
        {
            for(int i=0, j=str.size()-1 ; i<str.size()-1, j>=0,i<=j ; i++, j--)
            {
                if(str[i] != str[j])
                {
                    return false;
                }
            }
            return true;
        }
    }
};
