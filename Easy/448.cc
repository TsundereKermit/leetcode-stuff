class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums.at(i)) - 1; // Since 1 is at nums(0), etc.
            if (nums.at(idx) > 0) {
                nums.at(idx) *= -1;
            } 
        }
        
        vector <int> ret;
        for (int j = 0; j < nums.size(); j++) {
            if (nums.at(j) > 0) {
                ret.push_back(j + 1);
            }
        }
        
        return ret;
    }
};

// Trying to make sol O(1) space made the time complexity worse, FeelsBadMan