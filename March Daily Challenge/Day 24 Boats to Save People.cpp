Question Link- https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
         sort(people.begin(), people.end());
        int count = 0; // to store the minimum number boats required to save people 
        int left = 0;
        int right = people.size() -1;
        while(left <= right){
           int sum = people[left] + people[right];
            
            //two cases arises:
            if(sum <= limit){
              // when sum is less or atmost equivalent to given limit;
                count++;
                left++;
                right--;
            
            }
            if(sum > limit){
                // if the sum comes greater than limit than push the heavier weight person to go alone in the boat.
              count++;
                right--;
            }
        }
        return count;
    }
};
