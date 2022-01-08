Question Link- https://leetcode.com/contest/biweekly-contest-69/problems/capitalize-the-title/

class Solution {
    
public:
    string capitalizeTitle(string title){
    stringstream s1(title);
    string word_count;
        string answer = "";
        while(s1 >> word_count) {
            transform(word_count.begin(), word_count.end(), word_count.begin(), ::tolower);
            if(word_count.length() > 2) {
                word_count[0] = toupper(word_count[0]);
                answer += word_count;
            } 
            else {
                answer += word_count;
            }
            answer += " ";
        }
    string s2 = "";
        for(int i = 0; i < answer.size() - 1; i++)
            s2 += answer[i];
        
        return s2;
    }
};
