class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int sum=0;
        for(int i=0 ; i<k ; i++)
        {
            sum = (sum*10 +1)%k;
            if(sum ==0 ) return i+1;
        }
        return -1;
    }
};
