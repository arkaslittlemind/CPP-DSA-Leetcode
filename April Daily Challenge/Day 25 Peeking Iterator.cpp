Question Link- https://leetcode.com/problems/peeking-iterator/

class PeekingIterator : public Iterator {
private:
    // support variables
    int _nextVal;
    bool _hasNext;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        // local copies initialised
	    this->_hasNext = Iterator::hasNext();
	    if (this->_hasNext) this->_nextVal = Iterator::next();
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return this->_nextVal;
	}
    
	int next() {
        // storing the current value of nextVal
        int tmp = this->_nextVal;
        // updating hasNext
        this->_hasNext = Iterator::hasNext();
        // updating nextVal, but only if we can
        if (this->_hasNext) {
            this->_nextVal = Iterator::next();
        }
	    return tmp;
	}
	
	bool hasNext() const {
	    return this->_hasNext;
	}
};
