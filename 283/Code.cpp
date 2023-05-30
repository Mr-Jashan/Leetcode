class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1) return ;
        int pt1=0, pt2=1;
        for(int i=0 ; i< nums.size() ; i++)
        {
            if(nums[pt1] == 0 && nums[pt2] != 0) 
            {
                swap(nums[pt1], nums[pt2]);
                pt1++;
                pt2++;
            }
            else if(nums[pt1] == 0 && nums[pt2] ==0) pt2++;
            else 
            {
                pt1++;
                pt2++;
            }
            if(pt2 == nums.size()) break;

        }
        return ;
    }
};
