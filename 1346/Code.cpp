class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0 ; i<n ;  i++)
        {
            float temp = arr[i]/(float)2;
            if(count(arr.begin(), arr.end(), 0) >1) return true;
            if(count(arr.begin(), arr.end(), temp) != 0 && arr[i] !=0) return true;  
        }
        return false;
    }
};
