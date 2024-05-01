class Solution {
public:
    // create an unordered set to store the values in 
    // set for faster retrieval after inserting
    unordered_set<int> vals;
    bool containsDuplicate(vector<int>& nums) {
        // loop through the array
        for(int&x : nums) {
            // vals.find(x) returns the iterator 
            // if vals.find(x) == vals.end() => it means it reach the end
            // of the iterator and has not found the value
            // and the value needs to be added in the set
            // if vals.find(x) != vals.end() => it means the value is found
            // return true
            if(vals.find(x) != vals.end()) {
                return true;
            }
            vals.insert(x);
        }
        return false;
    }
};
