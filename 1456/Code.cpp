class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0, temp=0, fans=INT_MIN;
        for(int i=0 ; i<k ; i++) 
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ans++;
        }
        fans = max(fans, ans);
        for(int i=k ; i<s.size() ; i++)
        {
            if(s[temp]=='a' || s[temp]=='e' || s[temp]=='i' || s[temp]=='o' || s[temp]=='u') ans--;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ans++;
            fans = max(fans, ans);
            temp++;
            cout<<ans;
        }
        return fans;
    }
};
