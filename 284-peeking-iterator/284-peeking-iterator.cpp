/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    
    int nextval;
    
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    
        
        nextval=Iterator::next();
        
        
	    
	}
	
	int peek() {
        
        return nextval;
        
	}
	
	int next() {
	    int temp=nextval;
        if(Iterator::hasNext())
            nextval=Iterator::next();
        else
            nextval=NULL;
        return temp;
	}
	
	bool hasNext() const {
        return nextval!=NULL;
	    
	}
};