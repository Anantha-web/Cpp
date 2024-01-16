class RandomizedSet {
public:
    // time: O(1)
    RandomizedSet() {
        
    }
    
    // time: O(1)
    bool insert(int val) {
        // return `false` if the item was present
        if (val2index.count(val) != 0) return false;

        // push the item in the back
        val2index[val] = values.size();
        values.push_back(val);
        return true;
    }
    
    // time: O(1)
    bool remove(int val) {
        // return `false` if the item was not present
        if (val2index.count(val) == 0) return false;

        // swap the current item and the back item
        int indexCurr = val2index[val];
        val2index[values.back()] = indexCurr;
        values[indexCurr] = values.back();

        // revmvoe the back item (after swapping)
        val2index.erase(val);
        values.pop_back();
        return true;
    }

    int getRandom() {
        return values[rand() % values.size()];
    }
private:
    unordered_map<int, int> val2index;
    vector<int> values;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
