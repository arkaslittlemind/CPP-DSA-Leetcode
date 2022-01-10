Question Link- https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size(), m = b.size();
        string result = "";
        int i = n - 1, j = m - 1, carry = 0;
        while(i >= 0 || j >= 0){
            int sum = 0;
            if(i >= 0) sum += (a[i] - '0');
            if(j >= 0) sum += (b[j] - '0');
            sum += carry;
            int unit_digit = sum % 2;
            carry = sum / 2;
            char d = unit_digit + '0';
            result = d + result;
            if(i >= 0) i--;
            if(j >= 0) j--;
        }
        if(carry > 0) result = ('1') + result;
        return result;
    }
};
