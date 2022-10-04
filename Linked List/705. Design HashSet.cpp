Question Link- https://leetcode.com/problems/design-hashset/

// Naive Approach //

class MyHashSet {
public:
    vector <int> m;
    int size;
    MyHashSet() {
        size = 1e6 + 1;
        m.resize(size);
    }
    
    void add(int key) {
        m[key] = 1;
    }
    
    void remove(int key) {
        m[key] = 0;
    }
    
    bool contains(int key) {
        return m[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

---------------------------------------------------------------------------------------------------
    
//Using Double Linked List //
    
class MyHashSet {
public:
    vector<list<int>> m;
    int size;
    MyHashSet() {
        size = 100;
        m.resize(size);
    }
    
    //Hashing Function
    int hash(int key){
        return key % size;
    }
    
    
    //Search Function
    list <int> ::iterator search(int key){
        int i = hash(key);
        return find(m[i].begin(), m[i].end(), key);
    }
    
    
    
    void add(int key) {
        if(contains(key))
            return;
        int  i = hash(key);
        m[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i = hash(key);
        m[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i = hash(key);
        if(search(key) != m[i].end()) 
            return true;
        else
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
  
