Question Link- https://leetcode.com/problems/power-of-two/

//Bit Manipulation Approach//

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
			return false;
		}
		return (n & (n - 1)) == 0;
    }
};
