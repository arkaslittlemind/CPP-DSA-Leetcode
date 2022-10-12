class Solution {
public:
    unordered_set <int> s;
    bool isHappy(int n) {
        int ans = 0;
        while(n > 0){
            ans += pow(n % 10, 2);
            n = n / 10;
        }
        if (ans == 1) return true;
        else {
            if(s.find(ans) == s.end()){
            s.insert(ans);
                return isHappy(ans);
            }
        return false;
        }
    }
};