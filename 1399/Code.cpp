class Solution {
public:
    int sum(int n)
    {
        int sum =0;
        while(n!=0)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int> map;
        for(int i=1 ; i<=n ; i++)
        {
            int temp = sum(i);
            map[temp]++;
        }
        int ans = INT_MIN, count =0;
        for(auto [key, data]: map)
        {
            ans = max(ans, data);
        }
        for(auto [key, data]: map)
        {
            if(ans == data) count++; 
        }
        return count;
    }
};




