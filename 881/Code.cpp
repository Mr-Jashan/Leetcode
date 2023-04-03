class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size(), st = 0, et = n-1, count =0 ;
        sort(people.begin(), people.end());
        while(st <= et)
        {
            if(people[st] + people[et] <= limit)
            {
                count++;
                st++;
                et--;
            }
            else
            {
                count++;
                et--;
            }
        }
        return count;
    }
};
