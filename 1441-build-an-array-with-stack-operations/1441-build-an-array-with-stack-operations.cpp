class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vec;
        int index = 1, pos = 0;
        while(pos < target.size()){
            vec.push_back("Push");
            
            if(target[pos] == index)
                pos++;
            else
                vec.push_back("Pop");
            
            index++;
        }
        return vec;
    }
};