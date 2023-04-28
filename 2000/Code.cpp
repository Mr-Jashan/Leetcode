class Solution {
public:
    string reversePrefix(string word, char ch) {
        int r = find(word.begin(), word.end(), ch) - word.begin();
        int l=0;
        if(r>word.size()-1) return word;
        while(l<r) swap(word[l],word[r]), l++,r--;
        return word;
    }
};
