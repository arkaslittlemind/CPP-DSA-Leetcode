Question Link- https://leetcode.com/problems/stream-of-characters/

//Constructing a Trie//

class StreamChecker {
private:   
    class Trie {   // Trie construction
    public:
        bool is_wordEnd;
        Trie* children[26];
        Trie() {
            this->is_wordEnd = false;
            for(int i=0;i<26;i++)
                this->children[i] = NULL;
        }
        
        void insert(string word) {
            
            reverse(word.begin(), word.end());  //gonna insert in reverse order
            
            Trie* node = this;
            
            for(int i=0;i<word.length();i++){
                int idx = word[i] - 'a';
                if (node->children[idx] == NULL)node->children[idx] = new Trie();
                node = node->children[idx];
            }
            node->is_wordEnd = true;
        }
    };
    
    Trie trie; // will store all the words provided !!
    vector<char>queries; //will store the stream of characters to match with the words given !!
    int max_length=0; //gonna store the length of longest word 
    
public:
    StreamChecker(vector<string>& words) {
        for (auto word: words){
            trie.insert(word);  //inserting words into trie
            if(word.size()>max_length)max_length=word.size(); //keep the track of max_length so that can maintain the length of StreamChecker in future !!
          }
    }
    
    bool query(char letter) {
        
        queries.insert(queries.begin(), letter);//inserting the incoming char in the queries vector at the front(), so that reverse order is maintained here too !!
        
        if (queries.size() > max_length)  // That's why we maintained max_length, because the 
            queries.pop_back();           // longest query that can match the word is never gonna be longer than the length of the longest word in the trie... So we pop() from the back !!
        
        Trie* cur = &trie;
        for (auto it = queries.begin(); it!=queries.end();++it)
        {
            if (cur->is_wordEnd) return true;
            if (cur->children[*it -'a'] == NULL) return false;
            cur = cur->children[*it-'a'];
        }
        return cur->is_wordEnd;
    }
    
};
