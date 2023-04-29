/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int x=1, mid;
        while(x<=n)
        {
            int mid = ((n-x)/2) +x;
            cout<<mid<<"  ";
            int temp = guess(mid);
            if(temp == 0) return mid;
            else if(temp == -1) n = mid-1;
            else x = mid+1;
        }
        return mid;
    }
};
