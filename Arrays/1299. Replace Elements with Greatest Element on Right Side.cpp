Question Link- https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

//One-pass & replace//

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int N = arr.size();
        int element = -1;
        int temp = 0;
        for(int i = N-1;i>=0;i--){
            temp = arr[i];
            arr[i] = element;
            element = max(element,temp);
        }
        return arr;
    }
};
