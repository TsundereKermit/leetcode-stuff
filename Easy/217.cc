class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int i = 0; i < nums.size(); i++) {
            numSet.insert(nums.at(i));
        }
        
        if (numSet.size() < nums.size()) {
            return true;
        } else {
            return false;
        }
    }
};